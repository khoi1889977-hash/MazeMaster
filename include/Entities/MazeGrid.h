#pragma once
#include <vector>
struct cell{
    bool is_block;
    bool visited;
    int parent_x;
    int parent_y;
    bool is_start;
    bool is_end;
    cell(bool bl=true,bool vi=false,int non=0):is_block(bl),visited(vi),parent_x(non),parent_y(non),is_start(false),is_end(false){}
};
void create_maze(std::vector<std::vector<cell>> &grid,const int &height,const int &width);
void update_start_end(std::vector<std::vector<cell>> &grid,const int &start_x,const int &start_y,const int &end_x,const int  &end_y);
void reset_maze(std::vector<std::vector<cell>> &grid,const int &height,int const &width);
void reset_maze_solve(std::vector<std::vector<cell>> &grid,const int &height,int const &width);
