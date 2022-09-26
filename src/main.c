#include "graphics/graphics.h"
#include "entities/floor.h"
#include <tice.h>


uint32_t g_pixelCount = SCREEN_WIDTH * SCREEN_HEIGHT;

int main (void) {
    g_init();

    Floor floor;
    f_init(&floor);

    
    g_draw(floor);

    while (!os_GetCSC()) {}

    g_end();

    return 0;
}