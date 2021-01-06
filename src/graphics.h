#include "common.h"
#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "engine.h"
#include <SDL2/SDL.h>

void graphics_init();
void graphics_finish();

SDL_GLContext* graphics_context_new();

void graphics_set_antialiasing(int quality);
void graphics_set_fullscreen(bool);
void graphics_set_multisamples(int samples);
void graphics_set_vsync(bool vsync);


void graphics_context_delete(SDL_GLContext* );
void graphics_context_current(SDL_GLContext*);

bool graphics_get_fullscreen();
int graphics_get_antialiasing();
int graphics_get_multisamples();

int graphics_viewport_height();
int graphics_viewport_width();
float graphics_viewport_ratio();
const char* graphics_viewport_title();

void graphics_viewport_set_title(const char*);
void graphics_viewport_set_position(int,int);
void graphics_viewport_set_size(int, int);
void graphics_viewport_set_icon(fpath icon);
void graphics_viewport_screenshot();


#endif
