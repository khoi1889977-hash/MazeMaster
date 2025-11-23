#pragma once
#include <vector>
struct Cell{
    bool is_block;
    bool visited;
    Cell(bool bl=true,bool vi=false):is_block(bl),visited(vi){}
};

void create_maze(std::vector<std::vector<Cell>> &grid,int height,int width);
void draw_maze(const std::vector<std::vector<Cell>> &grid,int cell_size);