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

typedef vec4 quat;

quat quat_id();
quat quat_new(float,float,float,float);
quat quat_angle_axis(float, vec3);
quat quat_roation_x(float);
quat quat_rotation_y(float);
quat quat_rotation_z(float);
quat quat_from_euler(vec3);
quat quat_normalize(quat);

vec3 quat_to_euler(quat);


quat quat_mult_quat(quat,quat);
vec3 quat_mult_vec3(quat, vec3);

quat quat_neg(quat);
quat quat_scale(quat, float);

float quat_at(quat, int);
float quat_real(quat);

void quat_to_angle_axis(quat, vec3* axis, float* angle);
vec3 quat_to_euler(quat);


float quat_length(quat);
float quat_distance(quat, quat);


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

float mat2_det(mat2);

mat2 mat2_transpose(mat2);
mat2 mat2_inverse(mat2);
mat2 mat2_rotation(float);

void mat2_print(mat2);
void mat2_to_array(mat2, float* out);

/* 3D Matrices */

typedef struct {
  float xx;
  float xy;
  float xz;

  float yx;
  float yy;
  float yz;

  float zx;
  float zy;
  float zz;
} mat3;

mat3 mat3_id();
mat3 mat3_zero();
mat3 mat3_new(float,float,float
              ,float,float,float
              ,float,float,float);

mat3 mat3_mult_mat3(mat3, mat3);

vec3 mat3_mult_vec3(mat3, vec3);

float mat3_det(mat3);

mat3 mat3_transpose(mat3);
mat3 mat3_inverse(mat3);

void mat3_to_array(mat3, float* out);
void mat3_print(mat3);

mat3 mat3_scale(vec3);
mat3 mat3_rotation_x(float);
mat3 mat3_rotation_y(float);
mat3 mat3_rotation_z(float);
mat3 mat3_rotation_angle_axis(float angle, vec3 axis);

/* 4D Matrices */

typedef struct {
  float xx; float xy; float xz; float xw;
  float yx; float yy; float yz; float yw;
  float zx; float zy; float zz; float zw;
  float wx; float wy; float wz; float ww;
} mat4;


mat4 mat4_id();
mat4 mat4_zero();
mat4 mat4_new(float xx, float xy, float xz, float xw,
              float yx, float yy, float yz, float yw,
              float zx, float zy, float zz, float zw,
              float wx, float wy, float wz, float ww);

float mat4_at(mat4,int, int);

mat4 mat4_set(mat4, int,int,float);
mat4 mat4_mult_mat4(mat4,mat4);
mat4 mat3_to_mat4(mat3);

vec4 mat4_mult_vec4(mat4,vec4);
vec3 mat4_mult_vec3(mat4, vec3);

float mat4_det(mat4);
mat4 mat4_inverse(mat4);

mat4 mat4_transpose(mat4);

void mat4_to_array(mat4, float* out);
void mat4_to_array_transpose(mat4, float* out);

void mat4_print(mat4);

mat4 mat4_translate(vec3);
mat4 mat4_scale(vec3);

mat4 mat4_rotation_x(float);
mat4 mat4_rotation_y(float);
mat4 mat4_rotation_z(float);
mat4 mat4_rotation_axis_angle(vec3 axis, float angle);

mat4 mat4_rotation_quat(quat);
mat4 mat4_rotation_euler(float,float, float);
mat4 mat4_perspective(float fov, float clip_near, float clip_far, float ratio);
mat4 mat4_ortho(float left, float right, float bottom, float top, float near, float far);
mat4 mat4_world(vec3 pos, vec3 scale, quat rot);

mat4 mat4_lerp(mat4, mat4, float amount);

/* Plane Geometry */
typedef struct {
  vec3 dir;
  vec3 pos;
} plane;

plane plane_new(vec3, vec3);
plane plane_transform(plane,mat4 world, mat3 world_normal);

float plane_distance(plane, vec3 point);

bool point_inside_plane(vec3 point, plane);
bool point_outside_plane(vec3 point, plane);
bool point_intersects_plane(vec3 point, plane);

/* Box Geometry */
typedef struct {
  plane front;
  plane back;
  plane top;
  plane bottom;
  plane left;
  plane right;
} box;

box box_new(float x_min, float x_max, float y_min,
            float y_max, float z_min, float z_max);

box box_sphere(vec3 center, float radius);
box box_transform(box, mat4 world, mat3 world_normal);
box box_invert(box);
box box_invert_depth(box);
box box_invert_width(box);
box box_invert_height(box);

bool point_inside_box(vec3 point, box);
bool point_outside_box(vec3 point, box);
bool point_intersects_box(vec3 point, box b);

/* Frustum */

typedef struct {
  vec3 ntr, ntl, nbr, nbl;
  vec3 ftr, ftl, fbr, fnl;
}frustum;

frustum frustum_new(vec3, vec3, vec3, vec3, vec3, vec3, vec3, vec3);
frustum frustum_new_clipbox();
frustum frustum_new_camera(mat4 view, mat4 proj);
frustum frustum_slice(frustum, float start, float end);
frustum frustum_transform(frustum, mat4);
frustum frustum_translate(frustum, vec3);

bool frustum_outside_box(frustum, box);

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

