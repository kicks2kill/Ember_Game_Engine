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

quat quat_rotation_y(float angle)
{
  return quat_angle_axis(angle, vec3_new(0,1,0));
}

quat quat_rotation_z(float angle)
{
  return quat_angle_axis(angle, vec3_new(0,0,1));
}

float quat_length(quat q)
{
  return sqrtf(q.x*q.x + q.y*q.y +
               q.z*q.z + q.w*q.w);
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

quat quat_from_euler(vec3 v)
{
  float fc1 = cosf(v.z / 2.0f);
  float fc2 = cosf(v.x / 2.0f);
  float fc3 = cosf(v.y / 2.0f);

  float fs1 = sinf(v.z / 2.0f);
  float fs2 = sinf(v.x / 2.0f);
  float fs3 = sinf(v.y / 2.0f);

  return quat_new( fc1 * fc2 * fs3 - fs1 * fs2 * fc3,
                   fc1 * fs2 * fc3 + fs1 * fc2 * fs3,
                   fs1 * fc2 * fc3 - fc1 * fs2 * fs3,
                   fc1 * fc2 * fc3 + fs1 * fs2 * fs3);
}

vec3 quat_to_euler(quat q)
{
  float sqrx = q.x * q.x;
  float sqry = q.y * q.y;
  float sqrz = q.z * q.z;
  float sqrw = q.w * q.w;

  return vec3_new( asinf( -2.0f * (q.x * q.z - q.y * q.w)),
                   atan2f(2.0f * ( q.y * q.z + q.x * q.w),
                          ( -sqrx - sqry + sqrz + sqrw)),
                   atan2f( 2.0f * (q.x * q.y + q.z * q.w),
                           (sqrx - sqry - sqrz + sqrw) ));
}

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

float mat2_det(mat2 m)
{
  return m.xx * m.yy - m.xy * m.yx;
}

mat2 mat2_inverse(mat2 m)
{
  float det = mat2_det(m);
  float fac = 1.0 / det;

  mat2 m2;
  m2.xx = fac * m.yy;
  m2.xy = fac * -m.xy;
  m2.yx = fac * -m.yx;
  m2.yy = fac * m.xx;

  return m2;
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

/* 3D Matrice Functions */

mat3 mat3_zero()
{
  mat3 m;

  m.xx = 0.0f;
  m.xy = 0.0f;
  m.xz = 0.0f;

  m.yx = 0.0f;
  m.yy = 0.0f;
  m.yz = 0.0f;

  m.zx = 0.0f;
  m.zy = 0.0f;
  m.zz = 0.0f;

  return m;
}


mat3 mat3_id()
{
  mat3 m;

  m.xx = 1.0f;
  m.xy = 0.0f;
  m.xz = 0.0f;

  m.yx = 0.0f;
  m.yy = 1.0f;
  m.yz = 0.0f;

  m.zx = 0.0f;
  m.zy = 0.0f;
  m.zz = 1.0f;

  return m;
}

mat3 mat3_new(float xx, float xy, float xz,
              float yx, float yy, float yz,
              float zx, float zy, float zz)
{
  mat3 m;

  m.xx = xx;
  m.xy = xy;
  m.xz = xz;

  m.yx = yx;
  m.yy = yy;
  m.yz = yz;

  m.zx = zx;
  m.zy = zy;
  m.zz = zz;

  return m;
}

mat3  mat3_mult_mat3(mat3 m1, mat3 m2)
{
  mat3 m;
  m.xx = (m1.xx * m2.xx) + (m1.xy * m2.yx) + (m1.xz * m2.zx);
  m.xy = (m1.xx * m2.xy) + (m1.xy * m2.yy) + (m1.xz * m2.zy);
  m.xz = (m1.xx * m2.xz) + (m1.xy * m2.yz) + (m1.xz * m2.zz);

  m.yx = (m1.yx * m2.xx) + (m1.yy * m2.yx) + (m1.yz * m2.zx);
  m.yy = (m1.yx * m2.xy) + (m1.yy * m2.yy) + (m1.yz * m2.zy);
  m.yz = (m1.yx * m2.xz) + (m1.yy * m2.yz) + (m1.yz * m2.zz);

  m.zx = (m1.zx * m2.xx) + (m1.zy * m2.yx) + (m1.zz * m2.zx);
  m.zy = (m1.zx * m2.xy) + (m1.zy * m2.yy) + (m1.zz * m2.zy);
  m.zz = (m1.zx * m2.xz) + (m1.zy * m2.yz) + (m1.zz * m2.zz);
  return m;
}


vec3 mat3_mult_vec3(mat3 m, vec3 v)
{
  vec3 vec;
  vec.x = (m.xx * v.x) + (m.xy * v.y) + (m.xz * v.z);
  vec.y = (m.yx * v.x) + (m.yy * v.y) + (m.yz * v.z);
  vec.z = (m.zx * v.x) + (m.zy * v.y) + (m.zz * v.z);
  return vec;
}

float mat3_det(mat3 m)
{
  return (m.xx * m.yy * m.zz) + (m.xy * m.yz * m.zx) + (m.xz * m.yx * m.zy) -
    (m.xz * m.yy * m.zx) - (m.xy * m.yx * m.zz) - (m.xx * m.yz * m.zy);
}


mat3 mat3_transpose(mat3 m)
{
  mat3 m2;
  m2.xx = m.xx;
  m2.xy = m.yx;
  m2.xz = m.zx;
  
  m2.yx = m.xy;
  m2.yy = m.yy;
  m2.yz = m.zy;
  
  m2.zx = m.xz;
  m2.zy = m.yz;
  m2.zz = m.zz;
  return m2;
}


mat3 mat3_inverse(mat3 m)
{
  float det = mat3_det(m);
  float fac = 1.0 / det;

  mat3 m2;
  m2.xx = fac * mat2_det(mat2_new(m.yy, m.yz, m.zy, m.zz));
  m2.xy = fac * mat2_det(mat2_new(m.xz, m.xy, m.zz, m.zy));
  m2.xz = fac * mat2_det(mat2_new(m.xy, m.xz, m.yy, m.yz));

  m2.yx = fac * mat2_det(mat2_new(m.yz, m.yx, m.zz, m.zx));
  m2.yy = fac * mat2_det(mat2_new(m.xx, m.xz, m.zx, m.zz));
  m2.yz = fac * mat2_det(mat2_new(m.xz, m.xx, m.yz, m.yx));
  
  m2.zx = fac * mat2_det(mat2_new(m.yx, m.yy, m.zx, m.zy));
  m2.zy = fac * mat2_det(mat2_new(m.xy, m.xx, m.zy, m.zx));
  m2.zz = fac * mat2_det(mat2_new(m.xx, m.xy, m.yx, m.yy));

  return m2;
}

void mat3_to_array(mat3 m,float* out)
{
  out[0] = m.xx;
  out[1] = m.xy;
  out[2] = m.xz;
  out[3] = m.yx;
  out[4] = m.yy;
  out[5] = m.yz;
  out[6] = m.zx;
  out[7] = m.zy;
  out[8] = m.zz;
}


void mat3_print(mat3 m)
{
  printf("** %4.2f, %4.2f, %4.2f **\n", m.xx,m.xy,m.xz);
  printf("** %4.2f, %4.2f, %4.2f **\n", m.yx,m.yy,m.yz);
  printf("** %4.2f, %4.2f, %4.2f **\n", m.zx,m.zy,m.zz);
}

mat3 mat3_scale(vec3 scal)
{
  mat3 m = mat3_id();
  m.xx = scal.x;
  m.yy = scal.y;
  m.zz = scal.z;
  return m;
}

mat3 mat3_rotation_x(float a)
{
  mat3 m = mat3_id();

  m.yy = cos(a);
  m.yz = -sin(a);
  m.zy = sin(a);
  m.zz = cos(a);

  return m;
}

mat3 mat3_rotation_y(float a)
{
  mat3 m = mat3_id();

  m.xx = cos(a);
  m.xy = -sin(a);
  m.yx = sin(a);
  m.yy = cos(a);

  return m;
}

mat3 mat3_rotation_z(float a)
{
  mat3 m = mat3_id();

  m.xx = cos(a);
  m.xy = -sin(a);
  m.yx = sin(a);
  m.yy = cos(a);

  return m;
}

mat3 mat3_rotation_angle_axis(float a, vec3 v)
{
  mat3 m;

  float cos = cos(a);
  float sin = sin(a);
  float i = 1 - cos;

  m.xx = v.x * v.x * i + cos;
  m.xy = v.x * v.y * i - v.z * sin;
  m.xz = v.x * v.z * i + v.y * sin;

  m.yx = v.y * v.x * i + v.z * sin;
  m.yy = v.y * v.y * i + cos;
  m.yz = v.y * v.z * i - v.x * sin;

  m.zx = v.z * v.x * i - v.y * sin;
  m.zy = v.z * v.y * i + v.x * sin;
  m.zz = v.z * v.z * i + cos;

  return m;

}


/* 4D Matrice Functions */

/* Zero out the matrice */
mat4 mat4_zero()
{
  mat4 m;
  m.xx = 0.0f;
  m.xy = 0.0f;
  m.xz = 0.0f;
  m.xw = 0.0f;
  
  m.yx = 0.0f;
  m.yy = 0.0f;
  m.yz = 0.0f;
  m.yw = 0.0f;
  
  m.zx = 0.0f;
  m.zy = 0.0f;
  m.zz = 0.0f;
  m.zw = 0.0f;
  
  m.wx = 0.0f;
  m.wy = 0.0f;
  m.wz = 0.0f;
  m.ww = 0.0f;
  
  return m;
}


mat4 mat4_id()
{
  mat4 m = mat4_zero();

  m.xx = 1.0f;
  m.yy = 1.0f;
  m.zz = 1.0f;
  m.ww = 1.0f;

  return m;
}

/* Check location of matrice */
float mat4_at(mat4 m, int x, int y)
{
  float* arr= (float*)(&m);
  return arr[x + (y*4)];
}

mat4 mat4_set(mat4 m, int x, int y, float v)
{
  float* arr = (float*)(&m);
  arr[x + (y*4)] = v;

  return m;
}

mat4 mat4_transpose(mat4 m)
{
  mat4 m2;
  m2.xx = m.xx;
  m2.xy = m.yx;
  m2.xz = m.zx;
  m2.xw = m.wx;
  
  m2.yx = m.xy;
  m2.yy = m.yy;
  m2.yz = m.zy;
  m2.yw = m.wy;
  
  m2.zx = m.xz;
  m2.zy = m.yz;
  m2.zz = m.zz;
  m2.zw = m.wz;
  
  m2.wx = m.xw;
  m2.wy = m.yw;
  m2.wz = m.zw;
  m2.ww = m.ww;
  
  return m2;
}

mat4 mat4_mult_mat4(mat4 m1, mat4 m2)
{
  mat4 mat;

  mat.xx = (m1.xx * m2.xx) + (m1.xy * m2.yx) + (m1.xz * m2.zx) + (m1.xw * m2.wx);
  mat.xy = (m1.xx * m2.xy) + (m1.xy * m2.yy) + (m1.xz * m2.zy) + (m1.xw * m2.wy);
  mat.xz = (m1.xx * m2.xz) + (m1.xy * m2.yz) + (m1.xz * m2.zz) + (m1.xw * m2.wz);
  mat.xw = (m1.xx * m2.xw) + (m1.xy * m2.yw) + (m1.xz * m2.zw) + (m1.xw * m2.ww);
  
  mat.yx = (m1.yx * m2.xx) + (m1.yy * m2.yx) + (m1.yz * m2.zx) + (m1.yw * m2.wx);
  mat.yy = (m1.yx * m2.xy) + (m1.yy * m2.yy) + (m1.yz * m2.zy) + (m1.yw * m2.wy);
  mat.yz = (m1.yx * m2.xz) + (m1.yy * m2.yz) + (m1.yz * m2.zz) + (m1.yw * m2.wz);
  mat.yw = (m1.yx * m2.xw) + (m1.yy * m2.yw) + (m1.yz * m2.zw) + (m1.yw * m2.ww);
 
  mat.zx = (m1.zx * m2.xx) + (m1.zy * m2.yx) + (m1.zz * m2.zx) + (m1.zw * m2.wx);
  mat.zy = (m1.zx * m2.xy) + (m1.zy * m2.yy) + (m1.zz * m2.zy) + (m1.zw * m2.wy);
  mat.zz = (m1.zx * m2.xz) + (m1.zy * m2.yz) + (m1.zz * m2.zz) + (m1.zw * m2.wz);
  mat.zw = (m1.zx * m2.xw) + (m1.zy * m2.yw) + (m1.zz * m2.zw) + (m1.zw * m2.ww);
  
  mat.wx = (m1.wx * m2.xx) + (m1.wy * m2.yx) + (m1.wz * m2.zx) + (m1.ww * m2.wx);
  mat.wy = (m1.wx * m2.xy) + (m1.wy * m2.yy) + (m1.wz * m2.zy) + (m1.ww * m2.wy);
  mat.wz = (m1.wx * m2.xz) + (m1.wy * m2.yz) + (m1.wz * m2.zz) + (m1.ww * m2.wz);
  mat.ww = (m1.wx * m2.xw) + (m1.wy * m2.yw) + (m1.wz * m2.zw) + (m1.ww * m2.ww);
  
  return mat;
}

mat4 mat3_to_mat4(mat3 m)
{
  mat4 m4;

  m4.xx = m.xx;
  m4.xy = m.xy;
  m4.xz = m.xz;
  m4.xw = 0.0f;

  m4.yx = m.yx;
  m4.yy = m.yy;
  m4.yz = m.yz;
  m4.yw = 0.0f;

  m4.zx = m.zx;
  m4.zy = m.zy;
  m4.zz = m.zz;
  m4.zw = 0.0f;

  m4.wx = m.wx;
  m4.wy = m.wy;
  m4.wz = m.wz;
  m4.ww = 0.0f;

}

vec4 mat_mult_vec4(mat4 m, vec4 v)
{
  vec4 v4;
  v4.x = (m.xx * v.x) + (m.xy * v.y) + (m.xz * v.z) + (m.xw * v.w);
  v4.y = (m.yx * v.x) + (m.yy * v.y) + (m.yz * v.z) + (m.yw * v.w);
  v4.z = (m.zx * v.x) + (m.zy * v.y) + (m.zz * v.z) + (m.zw * v.w);
  v4.w = (m.wx * v.x) + (m.wy * v.y) + (m.wz * v.z) + (m.ww * v.w);
  
  return v4;
}

vec3 mat4_mult_vec3(mat4 m, vec3 v)
{
  vec4 homogenous_v = vec4_new(v.x,v.y,v.z,1);
  homogenous_v = mat4_mult_vec4(m, homogenous_v);

  homogenous_v = vec4_div(homogenous_v, homogenous_v.w);

  return vec3_new(homogenous.x,homogenous.y, homogenous.z);
}

mat3 mat4_to_mat3(mat4 m)
{
  mat3 m3;
  m3.xx = m.xx;
  m3.xy = m.xy;
  m3.xz = m.xz;

  m3.yx = m.yx;
  m3.yy = m.yy;
  m3.yz = m.yz;

  m3.zx = m.zx;
  m3.zy = m.zy;
  m3.zz = m.zz;

  return m3;
}


float mat4_det(mat4 m)
{
  float cofact_xx =  mat3_det(mat3_new(m.yy, m.yz, m.yw, m.zy,
                                       m.zz, m.zw, m.wy, m.wz, m.ww));

  float cofact_xy = -mat3_det(mat3_new(m.yx, m.yz, m.yw, m.zx,
                                       m.zz, m.zw, m.wx, m.wz, m.ww));

  float cofact_xz =  mat3_det(mat3_new(m.yx, m.yy, m.yw, m.zx,
                                       m.zy, m.zw, m.wx, m.wy, m.ww));

  float cofact_xw = -mat3_det(mat3_new(m.yx, m.yy, m.yz, m.zx,
                                       m.zy, m.zz, m.wx, m.wy, m.wz));
  
  return (cofact_xx * m.xx) + (cofact_xy * m.xy) +
    (cofact_xz * m.xz) + (cofact_xw * m.xw);
}

mat4 mat4_inverse(mat4 m)
{
  float deter = mat4_det(m);
  float fac = 1.0 / deter;

  mat4 m4;
  m4.xx = fac *  mat3_det(mat3_new(m.yy, m.yz, m.yw,
                                   m.zy, m.zz, m.zw, m.wy, m.wz, m.ww));
  m4.xy = fac * -mat3_det(mat3_new(m.yx, m.yz, m.yw,
                                   m.zx, m.zz, m.zw, m.wx, m.wz, m.ww));
  m4.xz = fac *  mat3_det(mat3_new(m.yx, m.yy, m.yw,
                                   m.zx, m.zy, m.zw, m.wx, m.wy, m.ww));
  m4.xw = fac * -mat3_det(mat3_new(m.yx, m.yy, m.yz,
                                   m.zx, m.zy, m.zz, m.wx, m.wy, m.wz));


  m4.yx = fac * -mat3_det(mat3_new(m.xy, m.xz, m.xw,
                                   m.zy, m.zz, m.zw, m.wy, m.wz, m.ww));
  m4.yy = fac *  mat3_det(mat3_new(m.xx, m.xz, m.xw,
                                   m.zx, m.zz, m.zw, m.wx, m.wz, m.ww));
  m4.yz = fac * -mat3_det(mat3_new(m.xx, m.xy, m.xw,
                                   m.zx, m.zy, m.zw, m.wx, m.wy, m.ww));
  m4.yw = fac *  mat3_det(mat3_new(m.xx, m.xy, m.xz,
                                   m.zx, m.zy, m.zz, m.wx, m.wy, m.wz));


  m4.zx = fac *  mat3_det(mat3_new(m.xy, m.xz, m.xw,
                                   m.yy, m.yz, m.yw, m.wy, m.wz, m.ww));
  m4.zy = fac * -mat3_det(mat3_new(m.xx, m.xz, m.xw,
                                   m.yx, m.yz, m.yw, m.wx, m.wz, m.ww));
  m4.zz = fac *  mat3_det(mat3_new(m.xx, m.xy, m.xw,
                                   m.yx, m.yy, m.yw, m.wx, m.wy, m.ww));
  m4.zw = fac * -mat3_det(mat3_new(m.xx, m.xy, m.xz,
                                   m.yx, m.yy, m.yz, m.wx, m.wy, m.wz));


  m4.wx = fac * -mat3_det(mat3_new(m.xy, m.xz, m.xw
                                  , m.yy, m.yz, m.yw, m.zy, m.zz, m.zw));
  m4.wy = fac *  mat3_det(mat3_new(m.xx, m.xz, m.xw,
                                   m.yx, m.yz, m.yw, m.zx, m.zz, m.zw));
  m4.wz = fac * -mat3_det(mat3_new(m.xx, m.xy, m.xw,
                                   m.yx, m.yy, m.yw, m.zx, m.zy, m.zw));
  m4.ww = fac *  mat3_det(mat3_new(m.xx, m.xy, m.xz,
                                   m.yx, m.yy, m.yz, m.zx, m.zy, m.zz));
  m4 = mat4_transpose(m4);
  return m4;
}

void mat4_to_array(mat4 m, flaot* out)
{
  out[0] = m.xx;
  out[1] = m.yx;
  out[2] = m.zx;
  out[3] = m.wx;

  out[4] = m.xy;
  out[5] = m.yy;
  out[6] = m.zy;
  out[7] = m.wy;

  out[8] = m.xz;
  out[9] = m.yz;
  out[10] = m.zz;
  out[11] = m.wz;

  out[12] = m.xw;
  out[13] = m.yw;
  out[14] = m.zw;
  out[15] = m.ww;
}

void mat4_to_array_transpose(mat4 m, float* out)
{
  out[0] = m.xx;
  out[1] = m.xy;
  out[2] = m.xz;
  out[3] = m.xw;

  out[4] = m.yx;
  out[5] = m.yy;
  out[6] = m.yz;
  out[7] = m.yw;

  out[8] = m.zx;
  out[9] = m.zy;
  out[10] = m.zz;
  out[11] = m.zw;

  out[12] = m.wx;
  out[13] = m.wy;
  out[14] = m.wz;
  out[15] = m.ww; 
}

void mat4_print(mat4 m)
{
  printf("** %4.2f, %4.2f, %4.2f, %4.2f **\n", m.xx, m.xy, m.xz, m.xw);
  printf("** %4.2f, %4.2f, %4.2f, %4.2f **\n", m.yx, m.yy, m.yz, m.yw);
  printf("** %4.2f, %4.2f, %4.2f, %4.2f **\n", m.zx, m.zy, m.zz, m.zw);
  printf("** %4.2f, %4.2f, %4.2f, %4.2f **\n", m.wx, m.wy, m.wz, m.ww);
  
}

mat4 mat4_translate(vec3 v)
{
  mat4 m = mat4_id();
  m.xw = v.x;
  m.yw = v.y;
  m.zw = v.z;
  return m;
}

mat4 mat4_scale(vec3 v)
{
  mat4 m = mat4_id();
  m.xx = v.x;
  m.yy = v.y;
  m.zz = v.z;
  return m;
}

mat4 mat4_rotation_x(float a)
{
  mat4 m = mat4_id();

  m.yy = cos(a);
  m.yz = -sin(a);
  m.zy = sin(a);
  m.zz = cos(a);
  return m;
}

mat4 mat4_rotation_y(float a)
{
  mat4 m = mat4_id();

  m.xx = cos(a);
  m.xz = sin(a);
  m.zx = -sin(a);
  m.zz = cos(a);
  return m;
}

mat4 mat4_rotation_z(float a)
{
  mat4 m = mat4_id();
  m.xx = cos(a);
  m.xy = -sin(a);
  m.yx = sin(a);
  m.yy = cos(a);
  return m;
}

mat4 mat4_rotation_axis_angle(vec3 v, float angle)
{
  mat4 m = mat4_id();

  float cs = cos(angle);
  float sn = sin(angle);
  float nc = 1 - cs;

  m.xx = v.x * v.x * nc + cs;
  m.xy = v.x * v.y * nc - v.z * sn;
  m.xz = v.x * v.z * nc + v.y * sn;
  
  m.yx = v.y * v.x * nc + v.z * sn;
  m.yy = v.y * v.y * nc + cs;
  m.yz = v.y * v.z * nc - v.x * sn;
  
  m.zx = v.z * v.x * nc - v.y * sn;
  m.zy = v.z * v.y * nc + v.x * sn;
  m.zz = v.z * v.z * nc + cs;
  
  return m;
}

/* I referred to a few textbooks to figure out these rotations, as well
   as looking at how other engines handled rotations around euler and quat*/
mat4 mat4_rotation_quat(vec4 v)
{
  float x2 = v.x + v.x;
  float y2 = v.y + v.y;
  float z2 = v.z + v.z;

  float xx = v.x * x2;
  float yy = v.y * y2;
  float zz = v.z * z2;

  float xy = v.x * y2;
  float yz = v.y * z2;
  float wy = v.w * y2;

  float xz = v.x * z2;
  float zz = v.z * z2;
  float wz = v.w * z2;

  return mat4_new( 1.0f - (yy + zz),
                   xy - wz, xz + wy, 0.0f,
                   xy + wz, 1.0f - (xx + zz),
                   yz - wx, 0.0f, xz -wy,
                   yz + wx, 1.0f - (xx + yy),
                   0.0f, 0.0f, 0.0f, 1.0f);
}

mat4 mat4_rotation_euler(float x, float y, float z)
{
  mat4 m = mat4_zero();

  float cosx = cos(x);
  float cosy = cos(y);
  float cosz = cos(z);

  float sinx = sin(x);
  float siny = sin(y);
  float sinz = sin(z);

  m.xx = cosy * cosz;
  m.yx = -cosx * sinz + sinx * siny * cosz;
  m.zx = sinx * sinz + cosx * siny * cosz;

  m.xy = cosy * sinz;
  m.yy = cosx * cosz + sinx * siny * sinz;
  m.zy = -sinx * cosz + cosx * siny * sinz;

  m.xz = -siny;
  m.yz = sinx * cosy;
  m.zz = cosx * cosy;

  m.ww = 1;
  
  return m;
}

mat4 mat4_perspective(float fov, float clip_near, float clip_far, float ratio)
{
  float left,right,bottom,top;

  right = (-clip_near * tanf(fov));
  left = -right;

  top = ratio * clip_near * tanf(fov);
  bottom = -top;

  mat4 projection = mat4_zero();
  projection.xx = (2.0 * clip_near) / (right - left);
  projection.yy = (2.0 * clip_near) / (top - bottom);
  projection.xz = (right + left) / (right - left);
  projection.yz = (top + bottom) / (top - bottom);
  projection.zz = (-clip_far - clip_near) / (clip_far - clip_near);
  projection.wz = -1.0;
  projection.zw = ( -(2.0 * clip_near) * clip_far) / (clip_far - clip_near);

  return projection;
}

mat4 mat4_ortho(float left, float right, float bottom,
                float top, float near, float far)
{
  mat4 m = mat4_id();
  m.xx = 2 / (right - left);
  m.yy = 2 / (top - bottom);
  m.zz = 1 / (near - far);

  m.xw = -1 - 2 * left / (right - left);
  m.yw = 1 + 2 * top / (bottom - top);
  m.zw = near / (near - far);

  return m;
}


mat4 mat4_world(vec3 pos, vec3 scale, quat rot)
{
  mat4 pos_m, sca_m, rot_m, result;

  pos_m = mat4_translate(pos);
  rot_m = mat4_rotation_quat(rot);
  sca_m = mat4_scale(scale);

  result = mat4_id();
  result = mat4_mult_mat4(result, pos_m);
  result = mat4_mult_mat4(result, rot_m);
  result = mat4_mult_mat4(result, sca_m);

  return result;
}

/* Plane Geometry */

plane plane_new(vec3 pos, vec3 dir)
{
  plane p;
  p.pos = pos;
  p.dir = dir;
  return p;
}

float plane_distance(plane p, vec3 point)
{
  return vec3_dot(vec3_sub(point, p.pos), p.dir);
}

plane plane_transform(plane p, mat4 world, mat3 world_normal)
{
  p.pos = mat4_mult_vec3(world, p.pos);
  p.dir = mat3_mult_vec3(world_normal, p.dir);
  p.dir = vec3_normalize(p.dir);
  return p;
}

bool point_inside_plane(vec3 point, plane p)
{
  return vec3_dot(vec3_sub(point, p.pos), p.dir) < 0;
}

bool point_outside_plane(vec3 point, plane p)
{
  return vec3_dot(vec3_sub(point, p.pos), p.dir) > 0;
}

bool point_intersects_plane(vec3 point, plane p)
{
  return vec3_dot(vec3_sub(point, p.pos), p.dir) == 0;
}

/* Box Geometry */

box box_new(float x_min, float x_max, float y_min,
            float y_max, float z_min, float z_max)
{
  box b;
  b.front = plane_new(vec3_new(0,0, z_max), vec3_new(0,0,1));
  b.back = plane_new(vec3_new(0,0, z_min), vec3_new(0,0,-1));
  b.top = plane_new(vec3_new(0,y_max, 0), vec3_new(0,1,0));
  b.bottom = plane_new(vec3_new(0,y_min, 0), vec3_new(0,-1,0));
  b.left = plane_new(vec3_new(x_max,0, 0), vec3_new(1,0,0));
  b.right = plane_new(vec3_new(x_min,0, 0), vec3_new(-1,,0));
  return b;
}

box box_sphere(vec3 center, float radius)
{
  box b;
  b.front = plane_new(vec3_add(center, vec3_new(0,0,radius)), vec3_new(0,0,1));
  b.back = plane_new(vec3_add(center, vec3_new(0,0,-radius)), vec3_new(0,0,-1));
  b.top = plane_new(vec3_add(center, vec3_new(0, radius, 0)), vec3_new(0,1,0));
  b.bottom = plane_new(vec3_add(center,vec3_new(0,-radius,0)), vec3_new(0,-1,0));
  b.left = plane_new(vec3_add(center,vec3_new(radius, 0,0)), vec3_new(1,0,0));
  b.right = plane_new(vec3_add(center, vec3_new(-radius, 0,0)), vec3_new(-1,0,0));
  return b;
}

box box_transform(box b, mat4 world, mat3 world_normal)
{
  b.front = plane_transform(b.front, world, world_normal);
  b.back = plane_transform(b.back, world, world_normal);
  b.top = plane_transform(b.top, world, world_normal);
  b.bottom = plane_transform(b.bottom, world, world_normal);
  b.left = plane_transform(b.left, world, world_normal);
  b.right = plane_transform(b.right, world, world_normal);
  return b;
}

box box_invert(box b)
{
  b.front.dir = vec3_neg(b.front.dir);
  b.back.dir = vec3_neg(b.back.dir);
  b.top.dir = vec3_neg(b.top.dir);
  b.bottom.dir = vec3_neg(b.bottom.dir);
  b.left.dir = vec3_neg(b.left.dir);
  b.right.dir = vec3_neg(b.right.dir);
  return b;
}

box box_invert_depth(box b)
{
  b.front.dir = vec3_neg(b.front.dir);
  b.back.dir = vec3_neg(b.back.dir);
  return b;
}

box box_invert_width(box b)
{
  b.left.dir = vec3_neg(b.left.dir);
  b.right.dir = vec3_neg(b.right.dir);
  return b;
}

box box_invert_height(box b)
{
  b.top.dir = vec3_neg(b.top.dir);
  b.bottom.dir = vec3_neg(b.bottom.dir);
  return b;
}

bool point_inside_box(vec3 point,box b)
{
  if (!point_inside_plane(point, b.front))  { return false; }
  if (!point_inside_plane(point, b.back))   { return false; }
  if (!point_inside_plane(point, b.top))    { return false; }
  if (!point_inside_plane(point, b.bottom)) { return false; }
  if (!point_inside_plane(point, b.left))   { return false; }
  if (!point_inside_plane(point, b.right))  { return false; }
  return true; 
}

bool point_outside_box(vec3 point, box b)
{
  return !(point_intersects_box(point,b) || point_inside_box(point,b));
}

bool point_intersects_box(vec3 point, box b)
{
  if (point_intersects_plane(point, b.front)) { return true; }
  if (point_intersects_plane(point, b.back)) { return true; }
  if (point_intersects_plane(point, b.top)) { return true; }
  if (point_intersects_plane(point, b.bottom)) { return true; }
  if (point_intersects_plane(point, b.left)) { return true; }
  if (point_intersects_plane(point, b.right)) { return true; }  
  return false;
}

/* Frustum  */

frustum frustum_new(vec3 ntr, vec3 ntl, vec3 nbr,
                    vec3 nbl, vec3 ftr, vec3 ftl, vec3 fbr, vec3 fnl)
{
  frustum f;
  f.ntr = ntr;
  f.ntl = ntl;
  f.nbr = nbr;
  f.nbl = nbl;

  f.ftr = ftr;
  f.ftl = ftl;
  f.fbr = fbr;
  f.fnl = fnl;
  return f;
}

//TODO frustum functions

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



