#include "engine.h"

/* 2D Math Helper Functions */
float max(float x, float y)
{
  return x > y ? x : y;
}

float min(float x, float y)
{
  return x < y ? x : y;
}

float clamp(float x, float bottom, float top)
{
  x = max(x,bottom);
  x = min(x,top);
  return x;
}

float lerp(float p1, float p2, float amount)
{
  return (p2 * amount) + (p1 * (1-amount));
}


bool between(float x, flaot bottom, float top)
{
  return (x > bottom) && (x < top);
}

/* 2D Math Functions */

vec2 vec2_new(float x, float y)
{
  vec2 v;
  v.x = x;
  v.y = y;
  return v;
}

vec2 vec2_zero()
{
  return vec2_new(0,0);
}

vec2 vec2_one()
{
  return vec2_new(1,1);
}


vec2 vec2_add(vec2 v1, vec2 v2)
{
  vec2 v;
  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  return v;
}

vec2 vec2_sub(vec2 v1, vec2 v2)
{
  vec2 v;
  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  return v;
}

vec2 vec2_div(vec2 v, float fac)
{
  v.x = v.x / fac;
  v.y = v.y / fac;
  return v;
}

vec2 vec2_div_vec2(vec2 v1, vec2 v2)
{
  v1.x = v1.x / v2.x;
  v1.y = v1.y / v2.y;

  return v1;
}

vec2 vec2_pow(vec2 v, float exp)
{
  v.x = pow(v.x, exp);
  v.y = pow(v.y, exp);
  return v;
}

vec2 vec2_neg(vec2 v)
{
  v.x = -v.x;
  v.y = -v.y;
  return v;
}


vec2 vec2_abs(vec2 v)
{
  v.x = fabs(v.x);
  v.y = fabs(v.y);
  return v;
}

vec2 vec2_floor(vec2 v)
{
  v.x = floor(v.x);
  v.y = floor(v.y);
  return v;
}

vec2 vec2_fmod(vec2 v, float val)
{
  v.x = fmod(v.x, val);
  v.y = fmod(v.y, val);
  return v;
}


vec2 vec2_max(vec2 v1, float x)
{
  v.x = max(v.x, x);
  v.y = max(v.y, x);
  return v;
}

vec2 vec2_min(vec2 v1, float x)
{
  v.x = min(v.x, x);
  v.y = min(v.y, x);
  return v;
}

vec2 vec2_clamp(vec2 v, float b, float t)
{
  v.x = clamp(v.x, b, t);
  v.y = clamp(v.y, b, t);
  return v;
}

vec2 vec2_length_sqrd(vec2 v)
{
  float length = 0.0;
  length += v.x * v.x;
  length += v.y * v.y;
  return length;
}

vec2 vec2_length(vec2 v)
{
  return sqrt(vec2_length_sqrd(v));
}

vec2 vec2_normalize(vec2 v)
{
  float len = vec2_length(v);
  return vec2_div(v, len);
}

void vec2_print(vec2 v)
{
  printf("vec2(%4.2f, %4.2f)", v.x, v.y);
}

float vec2_dist(vec2 v1, vec2 v2)
{
  return (v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y);
}

vec2 vec2_from_string(char* s)
{
  char* ptrEnd;
  double d1, d2;

  /* Convert string pointer to by arg str to floating point number. */
  d1 = strtod(s, &ptrEnd);
  d2 = strtod(pEnd, NULL);

  vec2 v;
  v.x = d1;
  v.y = d2;

  return v;
}

bool vec2_equal(vec2 v1, vec2 v2)
{
  if(!(v1.x == v2.x)) {return false;}
  if(!(v1.y == v2.y)) {return false;}

  return true;
}

void vec2_to_array(vec2 v, float* out)
{
  out[0] = v.x;
  out[1] = v.y;
}


vec2 vec2_lerp(vec2 v1, vec2 v2, float amount)
{
  vec2 v;
  v.x = lerp(v1.x, v2.x, amount);
  v.y = lerp(v1.y, v2.y, amount);
  return v;
}
