#include "graphics.h"

#include <tice.h>

void g_init (void) {
    gfx_Begin();
    gfx_SetDrawBuffer();
}

void g_end (void) {
    gfx_End();
}

void g_draw (const Floor floor) {
    gfx_ZeroScreen();

    f_draw(floor, 1);

    gfx_SwapDraw();
}