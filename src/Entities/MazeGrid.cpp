#include "Entities/MazeGrid.h"
#include "raylib.h"
using namespace std;

void create_maze(std::vector<vector<Cell>> &grid,int height,int width){
    grid.resize(height);
    for (int i=0; i<height;i++){
        grid[i].resize(width);
    }
}
void draw_maze(const vector<vector<Cell>> &grid,int cell_size){
    for ( int y=0; y< grid.size() ; y++){
        for (int x=0;x<grid[y].size();x++){
            int pos_x=x*cell_size;
            int pos_y=y*cell_size;
            if(grid[y][x].is_block){
                DrawRectangle(pos_x,pos_y,cell_size,cell_size,DARKGRAY);
            }
            else{
                DrawRectangle(pos_x,pos_y,cell_size,cell_size,RAYWHITE);
            }
            DrawRectangleLines(pos_x,pos_y,cell_size,cell_size,BLACK);
        }
    }
}