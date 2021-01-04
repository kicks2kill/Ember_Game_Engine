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

float vec2_dot(vec2 v1, vec2 v2)
{
  return (v1.x * v2.x) + (v1.y * v2.y);
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

/* 3D Math Functions */

vec3 vec3_new(float x, float y, float z)
{
  vec3 v;
  v.x = x;
  v.y = y;
  v.z = z;
  return v;
}

/* Colors  */
vec3 vec3_red()
{
  return vec3_new(1,0,0);
}

vec3 vec3_green()
{
  return vec3_new(0,1,0);
}

vec3 vec3_blue()
{
  return vec3_new(0,0,1);
}

vec3 vec3_black()
{
  return vec3_new(0,0,0);
}

vec3 vec3_white()
{
  return vec3_new(1,1,1);
}

vec3 vec3_grey()
{
  return vec3_new(0.5,0.5,0.5);
}

vec3 vec3_lgrey()
{
  return vec3_new(0.75, 0.75, 0.75);
}

vec3 vec3_dgrey()
{
  return vec3_new(0.25,0.25,0.25);
}

/* Fill with 0s or 1s */

vec3 vec3_zero()
{
  return vec3_new(0,0,0);
}

vec3 vec3_one()
{
  return vec3_new(1,1,1);
}

/* Standard Functions */

vec3 vec3_add(vec3 v1, vec3 v2)
{
  vec3 v;
  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  v.z = v1.z + v2.z;
  return v;
}

vec3 vec3_sub(vec3 v1, vec3 v2)
{
  vec3 v;
  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  v.z = v1.z - v2.z;
  return v;
}

vec3 vec3_mul(vec3 v, float fac)
{
  v.x = v.x * fac;
  v.y = v.y * fac;
  v.z = v.z * fac;
  return v;
}

vec3 vec3_mult_vec3(vec3 v1, vec3 v2)
{
  vec3 v;
  v.x = v1.x * v2.x;
  v.y = v1.y * v2.y;
  v.z = v1.z * v2.z;
  return v;
}

vec3 vec3_div(vec3 v, float fac)
{
  v.x = v.x * fac;
  v.y = v.y * fac;
  v.z = v.z * fac;
  return v;
}

vec3 vec3_div_vec3(vec3 v1, vec3 v2)
{
  vec3 v;
  v.x = v1.x / v2.x;
  v.y = v1.y / v2.y;
  v.z = v1.z / v2.z;
  return v;
}

vec3 vec3_pow(vec3 v, float exp)
{
  v.x = pow(v.x, exp);
  v.y = pow(v.y, exp);
  v.z = pow(v.z, exp);
  return v;
}

vec3 vec3_neg(vec3 v)
{
  v.x = -v.x;
  v.y = -v.y;
  v.z = -v.z;
  return v;
}

vec3 vec3_abs(vec3 v)
{
  v.x = fabs(v.x);
  v.y = fabs(v.y);
  v.z = fabs(v.z);
  return v;
}

vec3 vec3_floor(vec3 v)
{
  v.x = floor(v.x);
  v.y = floor(v.y);
  v.z = floor(v.z);
  return v;
}

vec3 vec3_fmod(vec3 v, float val)
{
  v.x = fmod(v.x, val);
  v.y = fmod(v.y, val);
  v.z = fmod(v.z, val);
  return v;
}

void vec3_print(vec3 v)
{
  printf("vec3(%4.2f, %4.2f, %4.2f)", v.x, v.y, v.z);
}

float vec3_dot(vec3 v1, vec3 v2)
{
  return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
}

float vec3_length_sqrd(vec3 v)
{
  float length = 0.0;
  length += v.x * v.x;
  length += v.y * v.y;
  length += v.z * v.z;
  return length;
}

float vec3_length(vec3 v)
{
  return sqrt(vec3_length_sqrd(v));
}

float vec3_dist(vec3 v1, vec3 v2)
{
  return sqrt(vec3_dist_sqrd(v1,v2));
}

vec3 vec3_cross(vec3 v1, vec3 v2)
{
  vec3 v;
  v.x = (v1.y * v2.z) - (v1.z * v2.y);
  v.y = (v1.z * v2.x) - (v1.x * v2.z);
  v.z = (v1.x * v2.y) - (v1.y * v2.x);
  return v;
}


vec3 vec3_lerp(vec3 v1, vec3 v2, float amount)
{
  vec3 v;
  v.x = lerp(v1.x, v2.x, amount);
  v.y = lerp(v1.y,v2.y, amount);
  v.z = lerp(v1.z, v2.z, amount);
  return v;
}
vec3 vec3_to_array(vec3 v, float *out)
{
  out[0] = v.x;
  out[1] = v.y;
  out[2] = v.z;
}

vec3 vec3_from_string(char* s)
{
  char* ptrEnd;
  double d1, d2, d3;
  d1 = strtod(s, &ptrEnd);
  d2 = strtod(ptrEnd, &ptrEnd);
  d3 = strtod(ptrEnd, NULL);

  vec3 v;
  v.x = d1;
  v.y = d2;
  v.z = d3;

  return v;
}

vec3 vec3_project(vec3 v1, vec3 v2)
{
  return vec3_sub(v1, vec3_mul(v2, vec3_dot(v1,v2)));
}

vec3 vec3_reflect(vec3 v1, vec3 v2)
{
  return vec3_sub(v1, vec3_mul(v2, 2 * vec3_dot(v1,v2)));
}

bool vec3_equal(vec3 v1, vec3 v2)
{
  if(v1.x != v2.x) {return false;}
  if(v1.y != v2.y) {return false;}
  if(v1.z != v2.z) {return false;}
  return true;
}

bool vec3_neq(vec3 v1, vec3 v2)
{
  if(v1.x != v2.x) {return true;}
  if(v1.y != v2.y) {return true;}
  if(v1.z != v2.z) {return true;}
  return false;
}

/* 4D Math Functions */

vec4 vec4_new(float x, float y, float z, float w)
{
  vec4 v;
  v.x = v;
  v.y = y;
  v.z = z;
  v.w = w;
  return v;
}

vec4 vec4_zero()
{
  return vec4_new(0,0,0,0);
}

vec4 vec4_one()
{
  return vec4_new(1,1,1,1);
}

vec4 vec4_red()
{
  return vec4_new(1,0,0,1);
}

vec4 vec4_green()
{
  return vec4_new(0,1,0,1);
}

vec4 vec4_blue()
{
  return vec4_new(0,0,1,1);
}

vec4 vec4_white()
{
  return vec4_new(1,1,1,1);
}

vec4 vec4_black()
{
  return vec4_new(0,0,0,1);
}

vec4 vec4_grey()
{
  return vec4_new(0.5,0.5,0.5, 1);
}

vec4 vec4_lgrey()
{
  return vec4_new(0.75,0.75,0.75,1);
}

vec4 vec4_dgrey()
{
  return vec4_new(0.25,0.25,0.25,1);
}

vec4 vec4_add(vec4 v1, vec4 v2)
{
  vec4 v;
  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  v.z = v1.z + v2.z;
  v.w = v1.w + v2.w;
  return v;
}


vec4 vec4_sub(vec4 v1, vec4 v2)
{
  vec4 v;
  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  v.z = v1.z - v2.z;
  v.w = v1.w - v2.w;
  return v;
}

vec4 vec4_mul(vec4 v1, float fac)
{
  vec4 v;
  v.x = v1.x * fac;
  v.y = v1.y * fac;
  v.z = v1.z * fac;
  v.w = v1.w * fac;
  return v;
}

vec4 vec4_div(vec4 v1, float fac)
{
  vec4 v;
  v.x = v1.x / fac;
  v.y = v1.y / fac;
  v.z = v1.z / fac;
  v.w = v1.w / fac;
  return v;
}

vec4 vec4_mult_vec4(vec4 v1, vec4 v2)
{
  vec4 v;
  v.x = v1.x * v2.x;
  v.y = v1.y * v2.y;
  v.z = v1.z * v2.z;
  v.w = v1.w * v2.w;
  return v;
}


vec4 vec4_abs(vec4 v)
{
  v.x = fabs(v.x);
  v.y = fabs(v.y);
  v.z = fabs(v.z);
  v.w = fabs(v.w);
  return v;
}

vec4 vec4_floor(vec4 v)
{
  v.x = floor(v.x);
  v.y = floor(v.y);
  v.z = floor(v.z);
  v.w = floor(v.w);
  return v;
}

vec4 vec4_fmod(vec4 v, float val)
{
  v.x = fmod(v.x, val);
  v.y = fmod(v.y, val);
  v.z = fmod(v.z, val);
  v.w = fmod(v.w, val);
  return v;  
}

vec4 vec4_sqrt(vec4 v)
{
  v.x = sqrt(v.x);
  v.y = sqrt(v.y);
  v.z = sqrt(v.z);
  v.w = sqrt(v.w);
  return v;  
}


/* Framerate info */

static char frame_rate_string_var[12];

static int frame_rate_var = 0;
static double frame_time_var = 0.0;

static unsigned long frame_start_time = 0.0;
static unsigned long frame_end_time = 0.0;

static const double frame_update_rate = 0.5;

static int frame_counter = 0;
static double frame_acc_time = 0.0;


void frame_begin()
{
  frame_start_time = SDL_GetTicks();
}

void frame_end()
{
  frame_end_time = SDL_GetTicks();

  frame_time_var = ((double)(fram_end_time - frame_start_time) /1000.0f);
  frame_acc_time += frame_time_var;
  frame_counter++;

  if(frame_acc_time > frame_update_rate)
    {
      frame_rate_var = round((double)frame_counter / frame_acc_time);
      frame_counter = 0;
      frame_acc_time = 0.0;
    }
  sprintf(frame_rate_string_var, "%i",frame_rate_var);
}

void frame_end_at_rate(double fps)
{
  unsigned long end_ticks = SDL_GetTicks();
  double active_frame_time = ((double)(end_ticks - frame_start_time) / 1000.0f);

  double wait = (1.0f/ fps) - active_frame_time;
  int ms = max(wait, 0) * 1000;

  SDL_Delay(ms);

  frame_end();
}

double frame_rate()
{
  return frame_rate_var;
}

double frame_time()
{
  return frame_time_var;
}

char* frame_rate_string()
{
  return frame_rate_string_var;
}



