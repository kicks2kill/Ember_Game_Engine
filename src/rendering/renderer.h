#ifndef RENDERER_H
#define RENDERER_H
#include "common.h"
#include "entities/camera.h"
#include "engine.h"


typedef struct {

  //Entities
  camera* camera;

  //Variables
  int seed;
  float glitch;
  float time;
  float time_of_day;
  float exposure;
  float exposure_speed;
  float exposure_target;
} renderer;

#endif
