#ifndef VECTOR_H
#define VECTOR_H


#define SET_VEC3(vec, vx, vy, vz)      \
    vec.x = vx;                        \
    vec.y = vy;                        \
    vec.z = vz;                        \

typedef struct {
    float x;
    float y;
    float z;
} vec3;


vec3 v_transform2d (const vec3 vector);

vec3 v_normalize (const vec3 vector);

vec3 v_add (const vec3 v1, const vec3 v2);
vec3 v_subtract (const vec3 v1, const vec3 v2);
vec3 v_cross (const vec3 v1, const vec3 v2);

#endif  // VECTOR_H
