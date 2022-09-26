#include "floor.h"

#include "../graphics/colors.h"
#include <graphx.h>

void f_init (Floor* floor) {
    SET_VEC3(floor->normal, 0.0f, 1.0f, 0.0f);

    floor->colors[0] = RED;
    floor->colors[1] = WHITE;

    uint16_t i = 0;
    for (float x = 0.0f; x < FLOOR_WIDTH; x += TILE_WIDTH) {
        for (float z = 0.0f; z < FLOOR_DEPTH; z += TILE_DEPTH) {
            SET_VEC3(floor->vertices[i], x, 0.0f, z);

            i++;
        }
    }
}

void f_transform (Floor* floor, const float* matrix) {

}

void f_draw (const Floor floor, uint8_t filled) {
    uint16_t vertexCount = VERTEX_COUNT;
    for (uint16_t i = 0; i < vertexCount; i++) {
        if (i % FLOOR_WIDTH != FLOOR_WIDTH - 1 && i / FLOOR_DEPTH != FLOOR_DEPTH - 1) {  // dont draw quads based of edge vertices
            gfx_SetColor(floor.colors[i % COLOR_COUNT]);
            if (filled) {
                gfx_FillRectangle(
                    (int)floor.vertices[i].x, 
                    (int)floor.vertices[i].y,
                    (int)TILE_WIDTH,
                    (int)TILE_DEPTH
                );
            }
            else {
                gfx_Rectangle(
                    (int)floor.vertices[i].x, 
                    (int)floor.vertices[i].y,
                    (int)TILE_WIDTH,
                    (int)TILE_DEPTH
                );
            }
        }
    }
}
