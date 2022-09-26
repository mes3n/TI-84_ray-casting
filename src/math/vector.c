#include "vector.h"


static float Q_rsqrt (float number) {  // copy of fast inverse square root
    if (number < 0.01f) {
        return 0.0f;
    }

	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = * ( long * ) &y;                       // evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck? 
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}

static float inverseLengthOf (const vec3 vector) {
    return Q_rsqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}


vec3 v_transform2d (const vec3 vector) {
    vec3 result;

    result.x = vector.x / -vector.z;
    result.y = vector.y / -vector.z;
    result.z = 1.0f;

    return result;
}

vec3 v_normalize (const vec3 vector) {
    vec3 result;

    float inverseLength = inverseLengthOf(vector);

    result.x *= inverseLength;
    result.y *= inverseLength;
    result.z *= inverseLength;

    return result;
}

vec3 v_add (const vec3 v1, const vec3 v2) {
    vec3 result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;

    return result;
}

vec3 v_subtract (const vec3 v1, const vec3 v2) {
    vec3 result;

    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;

    return result;
}

vec3 v_cross (const vec3 v1, const vec3 v2) {
    vec3 result;

    result.x = v1.y*v2.z + v1.z*v2.y;
    result.y = v1.z*v2.x + v1.x*v2.z;
    result.z = v1.x*v2.y + v1.y*v2.x;

    return result;
}