# ----------------------------
# Makefile Options
# ----------------------------

NAME = RayCast
ICON = icon.png
DESCRIPTION = "ray casting program for the TI graphing calculator"
COMPRESSED = NO
ARCHIVED = YES

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
