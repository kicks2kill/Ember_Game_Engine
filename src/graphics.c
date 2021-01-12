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

void graphics_finish()
{
  SDL_GL_DeleteContext(context);
  SDL_DestroyWindow(screen);
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

void graphics_set_multisamples(int samples)
{
  multisamples = samples;
  if(samples > 0)
    {
      window_multisamplesbuff = 1;
    } else
    {
      window_multisamplesbuff = 0;
    }
}

int graphics_get_multisamples()
{
  return window_multisamples;
}

void graphics_set_fullscreen(bool fullscreen)
{
  if(fullscreen)
    {
      window_flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
    } else
    {
      window_flags &= !SDL_WINDOW_FULLSCREEN_DESKTOP;
    }
}

bool graphics_get_fullscreen()
{
  if(window_flags & SDL_WINDOW_FULLSCREEN_DESKTOP)
    {
      return true;
    } else
    {
      return false;
    }
}

void graphics_viewport_set_size(int w, int h)
{
  SDL_SetWindowSize(screen, w, h);
  glViewport(0,0,w,h);
}

int graphics_viewport_height()
{
  int w, h;
  SDL_GetWindowSie(screen, &w, &h);
  return h;
}

int graphics_viewport_width()
{
  int w, h;
  SDL_GetWindowSize(screen, &w,&h);
  return w;
}

float graphcis_viewport_ratio()
{
  int w, h;
  SDL_GetWindowSize(screen, &w, &h);
  return (float)h / (float) w;
}


//TODO: set_title, set_position, set_size, set_icon, set_screenshot

void graphics_set_antialiasing(int quality)
{
  window_antialiasing = quality;
}

int graphics_get_antialiasing()
{
  return window_antialiasing;
}

