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
