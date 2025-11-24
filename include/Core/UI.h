#pragma once

#include "raylib.h"
#include <vector>

struct Cell;

static void draw_maze(const std::vector<std::vector<Cell>> &grid,int cell_size);
void setup_window(const int& height,const int& width,int& cell_size );
void get_current_maze(const std::vector<std::vector<Cell>> &grid,int cell_size );