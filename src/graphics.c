#include "graphics.h"

static SDL_Window* screen = NULL;
static SDL_GLContext* context = NULL;

static int window_multisamples = 0;
static int window_multisamplesbuff = 0;
static int window_antialiasing = 0;
static int window_flags = 0;


static void graphics_viewport_start()
{
  screen = SDL_CreateWindow("Ember",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            600,
                            window_flags);

  if(screen == NULL)
    {
      printf("Could not create SDL Window %s", SDL_GetError());
    }

  context = SDL_GL_CreateContext(screen);

  if(context == NULL)
    {
      printf("Could not create SDL context %s",SDL_GetError());
    }

  glViewport(0,0,800,600);
}

void graphics_init()
{
  int video = SDL_InitSubSystem(SDL_INIT_VIDEO);

  if(video == -1)
    {
      printf("Cannot init SDL video");
    }

  window_flags = SDL_WINDOW_OPENGL;
  window_multisamples = 4;
  window_multisamplesbuff = 1;
  window_antialiasing;

  graphics_viewport_start();

  SDL_GL_PrintInfo();
  SDL_GL_PrintExtensions();
}

SDL_GLContext* graphics_context_new()
{
  SDL_GL_SetAttribute(SDL_GL_SHARE_WITH_CURRENT_CONTEXT, 1);
  return SDL_GL_CreateContext(screen);
}

void graphics_context_delete(SDL_GLContext* context)
{
  SDL_GL_DeleteContext(context);
}

void graphics_context_current(SDL_GLContext* context)
{
  SDL_GL_MakeCurrent(screen,context);
}

void graphics_set_antialiasing(int quality)
{
  window_antialiasing = quality;
}

int graphics_get_antialiasing()
{
  return window_antialiasing;
}

