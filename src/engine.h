#include "common.h"
/* Vector Maths */

/* 2D */

typedef struct {
  float x;
  float y;
} vec2;

/* Helper Functions */
float max(float, float);
float min(float, float);
float clamp(float, float, float);
float lerp(float, float, float);

bool between(float, float, float);

vec2 vec2_new(float x, float y);
vec2 vec2_zero();
vec2 vec2_one();

vec2 vec2_add(vec2, vec2);
vec2 vec2_sub(vec2, vec2);
vec2 vec2_mul(vec2, float fac);
vec2 vec2_mul_vec2(vec2, vec2);
vec2 vec2_div(vec2, float fac);
vec2 vec2_div_vec2(vec2,vec2);
vec2 vec2_pow(vec2, float exp);
vec2 vec2_neg(vec2);
vec2 vec2_abs(vec2);
vec2 vec2_floor(vec2);
vec2 vec2_fmod(vec2, float val);

vec2 vec2_max(vec2, float x);
vec2 vec2_min(vec2, float x);
vec2 vec2_clamp(vec2, float, float);

vec2 vec2_normalize(vec2);
vec2 vec2_from_string(char*);

void vec2_print(vec2);
void vec2_to_array(vec2, float* out);

float vec2_dot(vec2,vec2);
float vec2_length(vec2);
float vec2_length_sqrd(vec2);
float vec2_dist(vec2,vec2);

bool vec2_equal(vec2,vec2);

vec2 vec2_lerp(vec2, vec2, float amount);


/* 3D Math */
typedef struct {
  float x;
  float y;
  float z;
} vec3;

vec3 vec3_new(float, float, float);
vec3 vec3_red();
vec3 vec3_green();
vec3 vec3_blue();
vec3 vec3_black();
vec3 vec3_white();
vec3 vec3_grey();
vec3 vec3_lgrey();
vec3 vec3_dgrey();
vec3 vec3_zero();
vec3 vec3_one();

vec3 vec3_add(vec3, vec3);
vec3 vec3_sub(vec3,vec3);
vec3 vec3_mul(vec3,float fac);
vec3 vec3_mult_vec3(vec3, vec3);
vec3 vec3_div(vec3, float fac);
vec3 vec3_div_vec3(vec3, vec3);
vec3 vec3_pow(vec3, float fac);
vec3 vec3_neg(vec3);
vec3 vec3_abs(vec3);
vec3 vec3_floor(vec3);
vec3 vec3_fmod(vec3, float val);

void vec3_print(vec3);
void vec3_to_array(vec3, float *out);

float vec3_dot(vec3, vec3);
float vec3_length(vec3);
float vec3_length_sqrd(vec3);
float vec3_dist(vec3,vec3);

vec3 vec3_cross(vec3,vec3);
vec3 vec3_lerp(vec3,vec3,float amount);
vec3 vec3_from_string(char*);
vec3 vec3_project(vec3, vec3);
vec3 vec3_reflect(vec3,vec3);

bool vec3_equal(vec3, vec3);
bool vec3_neq(vec3,vec3);

/* 4D Math Functions */

typedef struct {
  float x;
  float y;
  float z;
  float w;
} vec4;

vec4 vec4_new(float,float,float,float);
vec4 vec4_zero();
vec4 vec4_one();

vec4 vec4_red();
vec4 vec4_green();
vec4 vec4_blue();
vec4 vec4_white();
vec4 vec4_black();
vec4 vec4_grey();
vec4 vec4_lgrey();
vec4 vec4_dgrey();


vec4 vec4_add(vec4, vec4);
vec4 vec4_sub(vec4,vec4);
vec4 vec4_mul(vec4, float fac);
vec4 vec4_mult_vec4(vec4, vec4);
vec4 vec4_div(vec4, float fac);
vec4 vec4_pow(vec4, float fac);
vec4 vec4_neg(vec4);
vec4 vec4_abs(vec4);
vec4 vec4_floor(vec4);
vec4 vec4_fmod(vec4, float val);
vec4 vec4_sqrt(vec4);

vec4 vec4_max(vec4,vec4);
vec4 vec4_min(vec4, vec4);

bool vec4_equal(vec4, vec4);

float vec4_dot(vec4,vec4);
float vec4_length_sqrd(vec4);
float vec4_length(vec4);
float vec4_dist_sqrd(vec4,vec4);
float vec4_dist(vec4,vec4);

vec4 vec4_normalize(vec4);
vec4 vec4_reflect(vec4,vec4);
vec4 vec4_from_string(char*);

void vec4_print(vec4);
void vec4_to_array(vec4, float* out);

vec4 vec4_lerp(vec4, vec4, float amount);

/* Quaternions */
//TODO
typedef vec4 quat;

quat quat_id();
quat quat_new(float,float,float,float);
quat quat_roation_x(float);
quat quat_rotation_y(float);
quat quat_rotation_z(float);
quat quat_from_euler(vec3);

/* Matrice Math */
/* 2D Matrices */
typedef struct
{
  float xx;
  float xy;
  float yx;
  float yy;
} mat2;

mat2 mat2_id();
mat2 mat2_zero();
mat2 mat2_new(float, float, float, float);
mat2 mat2_mult_mat2(mat2,mat2);

vec2 mat2_mult_vec2(mat2, vec2);

mat2 mat2_transpose(mat2);
mat2 mat2_inverse(mat2);
mat2 mat2_rotation(float);

void mat2_print(mat2);
void mat2_to_array(mat2, float* out);

/* 3D Matrices */



/* Framerate Info */
void frame_begin();
void frame_end();
void frame_end_at_rate(double);

double frame_rate();
double frame_time();
char* frame_rate_string();

//Get file system path
typedef struct {
  char ptr[MAX_PATH];
} fpath;

