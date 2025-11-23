#pragma once
#include <vector>
struct Cell{
    bool is_block;
    bool visited;
    Cell(bool bl=true,bool vi=false):is_block(bl),visited(vi){}
};
static void create_maze(std::vector<std::vector<Cell>> &grid,int height,int width);
static bool check_cell(int x,int y,const std::vector<std::vector<Cell>> &grid,int height,int width);
static void carve_maze(int x,int y,std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size);
void generate_maze(std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size);
void draw_maze(const std::vector<std::vector<Cell>> &grid,int cell_size);
