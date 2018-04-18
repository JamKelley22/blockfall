#include <stdio.h>
#include <stdint.h>

#include "io.h"
#include "block.h"

#define GRID_X 10
#define GRID_Y 16

class grid {
  public:
    char map[GRID_Y][GRID_X];
}
