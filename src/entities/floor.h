#ifndef FLOOR_H
#define FLOOR_H

#include "../math/vector.h"
#include "math/types.h"

#define FLOOR_WIDTH 10
#define FLOOR_DEPTH 10

#define TILE_WIDTH 1.0f
#define TILE_DEPTH 1.0f

#define VERTEX_COUNT (uint16_t)((FLOOR_DEPTH / TILE_DEPTH) * (FLOOR_WIDTH / TILE_WIDTH))
 
#define COLOR_COUNT 2

typedef struct {
    vec3 vertices[VERTEX_COUNT];
    uint8_t colors[COLOR_COUNT];
    vec3 normal;
} Floor;


void f_init (Floor* floor);

void f_transform (Floor* floor, const float* matrix);

void f_draw (const Floor floor, uint8_t filled);

#endif  // FLOOR_H