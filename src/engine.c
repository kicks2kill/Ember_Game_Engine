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


bool between(float x, float bottom, float top)
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

vec4 vec4_mult_vec4(vec4 v1, vec4 v2)
{
  vec4 v;
  v.x = v1.x * v2.x;
  v.y = v1.y * v2.y;
  v.z = v1.z * v2.z;
  v.w = v1.w * v2.w;
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

vec4 vec4_pow(vec4 v, float exp)
{
  v.x = pow(v.x, exp);
  v.y = pow(v.y, exp);
  v.z = pow(v.z, exp);
  v.w = pow(v.w, exp);
  return v;
}

vec4 vec4_neg(vec4 v)
{
  v.x = -v.x;
  v.y = -v.y;
  v.z = -v.z;
  v.w = -v.w;
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

vec4 vec4_max(vec4 v1, vec4 v2)
{
  v1.x = max(v1.x, v2.x);
  v1.y = max(v1.y, v2.y);
  v1.z = max(v1.z, v2.z);
  v1.w = max(v1.w, v2.w);
  return v1;
}

vec4 vec4_min(vec4 v1, vec4 v2)
{
  v1.x = min(v1.x, v2.x);
  v1.y = min(v1.y, v2.y);
  v1.z = min(v1.z, v2.z);
  v1.w = min(v1.w, v2.w);
  return v1;
}

vec4 vec4_equal(vec4 v1, vec4 v2)
{
  if(!(v1.x == v2.x)) {return false;}
  if(!(v1.y == v2.y)) {return false;}
  if(!(v1.z == v2.z)) {return false;}
  if(!(v1.w == v2.w)) {return false;}
  return true;
}

float vec4_dot(vec4 v1, vec4 v2)
{
  return  (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z) + (v1.w * v2.w);
}

float vec4_length_sqrd(vec4 v)
{
  float length = 0.0;
  length += v.x * v.x;
  length += v.y * v.y;
  length += v.z * v.z;
  length += v.w * v.w;
  return length;
}

float vec4_length(vec4 v)
{
  return sqrt(vec4_length_sqrd(v));
}

float vec4_dist_sqrd(vec4 v1, vec4 v2)
{
  return (v1.x - v2.x) * (v1.x - v2.x) + 
    (v1.y - v2.y) * (v1.y - v2.y) +
    (v1.z - v2.z) * (v1.z - v2.z) +
    (v1.w - v2.w) * (v1.w - v2.w);
}


float vec4_dist(vec4 v1, vec4 v2)
{
  return sqrt(vec4_dist_sqrd(v1,v2));
}

vec4 vec4_normalize(vec4 v)
{
  float len = vec4_lenght(v);
  if(len == 0.0)
    {
      return vec4_zero();
    } else
    {
      return vec4_div(v, len);
  }
}

vec4 vec4_reflect(vec4 v1, vec4 v2)
{
  return vec4_sub(v1, vec4_mul(v2, 2 * vec4_dot(v1,v2)))
}

vec4 vec4_from_string(char* s)
{
  char* end;
  double d1,d2,d3,d4;
  d1 = strtod(s, &end);
  d2 = strotd(end, &end);
  d3 = strtod(end, &end);
  d4 = strtod(end,NULL);

  vec4 v;
  v.x = d1;
  v.y = d2;
  v.z = d3;
  v.w = d4;

  return v;
}



void vec4_print(vec4 v)
{
  printf("vec4(%4.2f, %4.2f, %4.2f, %4.2f)", v.x, v.y, v.z,  v.w);
}

vec4 vec4_to_array(vec4 v, float* out)
{
  out[0] = v.x;
  out[1] = v.y;
  out[2] = v.z;
  out[3] = v.w;
}

vec4 vec4_lerp(vec4 v1, vec4 v2, float amount)
{
  vec4 v;
  v.x = lerp(v1.x, v2.x, amount);
  v.y = lerp(v1.y, v2.y, amount);
  v.z = lerp(v1.z, v2.z, amount);
  v.w = lerp(v1.w, v2.w, amount);
  return v;
}



/* Quaternions */
//TODO: Check the inverse function
quat quat_id()
{
  return new quat_new(0,0,0,1);
}

quat quat_new(float x, float y, float z, float w)
{
  quat q;
  q.x = x;
  q.y = y;
  q.z = z;
  q.w = w;
  return q;
}

quat quat_angle_axis(float angle, vec3 v)
{
  float sine = sinf(angle / 2.0f);
  float cosine = cosf(angle / 2.0f);

  return quat_new(v.x * sine, v.y * sine, v.z * sine,cosine);
}


quat quat_rotation_x(float angle)
{
  return quat_angle_axis(angle, vec3_new(1,0,0));
}


quat quat_normalize(quat q)
{

  float scale = quat_length(q);
    return quat_new(
                    q.x / scale,
                    q.y / scale,
                    q.z / scale,
                    q.w / scale);
}
//from_euler and to_euler need to go here

quat quat_mult_quat(quat q1, quat q2)
{
  return quat_new(
                  (q1.w * q2.x) + (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y),
                  (q1.w * q2.y) - (q1.x * q2.z) + (q1.y * q2.w) + (q1.z * q2.x),
                  (q1.w * q2.z) + (q1.x * q2.y) - (q1.y * q2.x) + (q1.z * q2.w),
                  (q1.w * q2.w) - (q1.x * q2.x) - (q1.y * q2.y) - (q1.z * q2.z));
}


vec3 quat_mult_vec3(quat q, vec3 v)
{
  quat worker = q;
  worker = quat_mult_quat(worker, quat_normalize(quat_new(v.x, v.y, v.z, 0.0)));
  worker = quat_mult_quat(worker, quat_inverse(q));

  vec3 res = vec3_new(work.x,work.y,work.z);

  return vec3_mul(res,vec3_length(v));
}

quat quat_neg(quat q)
{
  q.x = -q.x;
  q.y = -q.y;
  q.z = -q.z;
  q.w = -q.w;
  return q;
}

quat quat_scale(quat q, float fac)
{
  q.x = q.x * fac;
  q.y = q.y * fac;
  q.z = q.z * fac;
  q.w = q.w * fac;
  return q;
}

float quat_distance(quat q1, quat q1)
{
  //TODO
}

/* Matrice Math */
/* 2D Matrices */
//TODO: Add more Matrice functions

mat2 mat2_id()
{
  mat2 mat;
  mat.xx = 1.0f;
  mat.xy = 0.0f;
  mat.yx = 0.0f;
  mat.yy = 1.0f;
  return mat;
}

mat2 mat2_zero()
{
  mat2 mat;
  mat.xx = 0.0f;
  mat.xy = 0.0f;
  mat.yx = 0.0f;
  mat.yy = 0.0f;
  return mat;
}

mat2 mat2_new(float xx, float xy, float yx, float yy)
{
  mat2 mat;
  mat.xx = xx;
  mat.xy = xy;
  mat.yx = yx;
  mat.yy = yy;
  return mat;
}

mat2 mat2_mult_mat2(mat2 m1, mat2 m2)
{
  mat2 mat;
  mat.xx = m1.xx * m2.xx + m1.xy * m2.yx;
  mat.xy = mat.xx * m2.xy + m1.xy * m2.yy;
  mat.yx = m1.yx * m2.xx + m1.yy * m2.yx;
  mat.yy = m1.yx * m2.xy + m1.yy * m2.yy;
  return mat;
}

vec2 mat2_mult_vec2(mat2 m, vec2 v)
{
  vec2 vec;  
  vec.x = v.x * m.xx + v.y * m.xy;
  vec.y = v.x * m.yx + v.y * m.yy;
  return vec;
}

mat2 mat2_transpose(mat2 m)
{
  mat2 m2;
  m2.xx = m.xx;
  m2.xy = m.yx;
  m2.yx = m.xy;
  m2.yy = m.yy;
  return m2;
}

mat2 mat2_inverse(mat2 m)
{
  //Do we need something else here to detect inverse?
}

mat2 mat2_rotation(float a)
{
  mat2 m;

  m.xx = cos(a);
  m.xy = -sin(a);
  m.yx = sin(a);
  m.yy = cos(a);
  return m;
}

void mat2_print(mat2 m)
{
  printf("|%4.2f, %4.2f|\n", m.xx, m.xy);
  printf("|%4.2f, %4.2f|\n", m.yx, m.yy);
}

void mat2_to_array(mat2 m, float* out)
{
  out[0] = m.xx;
  out[1] = m.xy;
  out[2] = m.yx;
  out[3] = m.yy;

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



