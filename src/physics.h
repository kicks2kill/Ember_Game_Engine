#ifndef PHYSICS_H
#define PHYSICS_H
#include "engine.h"

bool quadratic(float a, float b, float c, float* t0, float* t1);

vec3 vec3_gravity();

typedef struct {
  bool did_collide;
  float time;
  vec3 point;
  vec3 norm;
  int flags;
} collision;

collision collision_none();
collision collision_new(float time, vec3 point, vec3 norm);
collision collision_merge(collision, collision);

collision point_collide_point(vec3, vec3, vec3);
collision point_collide_sphere(vec3, vec3, sphere);


#endif
