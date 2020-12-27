#include "main.h"

const char *vertexShaderSource =
  "#version 330 core\n"
  "layout (location = 0) in vec3 aPos;\n"
  "layout (location = 1) in vec3 aColor;\n"
  "out vec3 ourColor;\n"
  "void main()\n"
  "{\n"
  " gl_Position = vec4(aPos, 1.0);\n"
  "ourColor = aColor;\n"
  "}\0";

const char *fragmentShaderSource = 
  "#version 330 core\n"
  "out vec4 FragColor;\n"
  "in vec3 ourColor;\n"
  "void main()\n"
  "{\n"
  "FragColor = vec4(ourColor, 1.0f);\n"
  "}\0";


void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
  glViewport(0,0,width,height);
}

void processInput(GLFWwindow *window)
{
  if( glfwGetKey(window,GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
      glfwSetWindowShouldClose(window,true);
    }

}


int main()
{
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
  glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(SCR_WIDTH,SCR_HEIGHT, "Main window", NULL, NULL);
  if(window == NULL)
    {
      printf("Failed to create GLFW window");
      glfwTerminate();
      return -1;
    }
  glfwMakeContextCurrent(window);

  //  glViewport(0,0,800,600);
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  //build and compile shader program
  int vertexShader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
  glCompileShader(vertexShader);

  //check for compile errors
  int success;
  char infoLog[512];
  glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

  if(!success)
    {
      glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
      printf("Error on Vertex Shader compilation");
    }

  //fragement shader
  int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
  glCompileShader(fragmentShader);
  glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
  if(!success)
    {
      glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
      printf("Error on Fragment Shader Compilation");
    }

  //Link the shaders
  int shaderProgram = glCreateProgram();
  glAttachShader(shaderProgram, vertexShader);
  glAttachShader(shaderProgram, fragmentShader);
  glLinkProgram(shaderProgram);

  //check for linking errors
  glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
  if(!success)
    {
      glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
      printf("Error on Shader linking");
    }

  glDeleteShader(vertexShader);
  glDeleteShader(fragmentShader);


  float vertices[] = {
                      // positions         // colors
                      0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,  // bottom right
                      -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  // bottom left
                      0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f   // top
  };

  //Vertex buffer and array objects -- these are required by openGL
  unsigned int VBO, VAO;
  glGenVertexArrays(1,&VAO);
  glGenBuffers(1,&VBO);
  //bind the vertex array object first, then bind and set vertex buffers, then configure  vertex attributes
  glBindVertexArray(VAO);

  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  //position attribute
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);

  //color attribute
  glVertexAttribPointer(1,3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 *sizeof(float)));
  glEnableVertexAttribArray(1);

  glUseProgram(shaderProgram);

  while(!glfwWindowShouldClose(window))
    {
      processInput(window);

      glClearColor(0.2f,0.3f,0.3f,1.0f);
      glClear(GL_COLOR_BUFFER_BIT);
      
      glBindVertexArray(VAO);
      glDrawArrays(GL_TRIANGLES, 0, 3);

      glfwSwapBuffers(window);
      glfwPollEvents();
    }

  glDeleteVertexArrays(1,&VAO);
  glDeleteBuffers(1, &VBO);
  glDeleteProgram(shaderProgram);

  glfwTerminate();
  return 0;
}
