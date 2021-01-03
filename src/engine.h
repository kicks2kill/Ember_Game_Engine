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


//Get file system path
typedef struct {
  char ptr[MAX_PATH];
} fpath;



