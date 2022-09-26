#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <graphx.h>

#include "../entities/floor.h"

#define SCREEN_WIDTH GFX_LCD_WIDTH
#define SCREEN_HEIGHT GFX_LCD_HEIGHT


void g_init (void);
void g_end(void);

void g_draw (const Floor floor);

#endif  // GRAPHICS_H
