#include "physics.h"

bool quadratic(float a, float b, float c, float* t0, float t1)
{
  float descrim = b*b - 4*a*c;

  if(descrim < 0)
    {
      return false
    }
  else
    {
      float d = sqrtf(descrim);
      float q = (b < 0) ? (-b  - d) / 2.0 : (-b + d) / 2.0;

      *t0 = q / a;
      *t1 = c / q;
      return true;
    }
}


vec3 vec3_gravity()
{
  return vec3_new(0, -9.81, 0);
}

collision collision_none()
{
  collision c;
  c.did_collide = false;
  col.time = 0;
  col.point = vec3_zero();
  col.norm = vec3_zero();
  col.flags = 0;
  return c;
}



collision collision_new(float time, vec3 point, vec3 norm)
{
  collision c;
  c.did_collide = true;
  col.time = time;
  col.point = point;
  col.norm = norm;
  col.flags = 0;
  return c;
}


collision collision_merge(collision c0, collision c1)
{
  collision c;
  c.did_collide = c0.did_collide || c1.did_collide;
  c.time = min(c0.time, c1.time);
  c.point = c0.time < c1.time ? c0.point : c1.point;
  c.norm = c0.time < c1.time ? c0.norm : c1.norm;
  c.flags = c0.time < c1.time ? c0.flags : c1.flags;
  return c;
}

//TODO
