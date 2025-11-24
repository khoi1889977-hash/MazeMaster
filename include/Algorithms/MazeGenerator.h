#pragma once
#include <vector>

struct Cell;

static bool check_cell(int x,int y,const std::vector<std::vector<Cell>> &grid,int height,int width);
static void carve_maze(int x,int y,std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size);
void generate_maze(std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size);
