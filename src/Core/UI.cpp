#include "Core/UI.h"
#include "Entities/MazeGrid.h"
static void draw_maze(const std::vector<std::vector<Cell>> &grid,int cell_size){
    for ( int y=0; y< grid.size() ; y++){
        for (int x=0;x<grid[y].size();x++){
            int pos_x=x*cell_size;
            int pos_y=y*cell_size;
            if(grid[y][x].is_block){
                DrawRectangle(200+pos_x,pos_y,cell_size,cell_size,DARKGRAY);
            }
            else{
                DrawRectangle(200+pos_x,pos_y,cell_size,cell_size,RAYWHITE);
            }
            DrawRectangleLines(200+pos_x,pos_y,cell_size,cell_size,BLACK);
        }
    }
}

void setup_window(const int& height,const int& width,int& cell_size ){
    if(height>width){
        cell_size=1000/height;
    }
    else{
        cell_size=1000/width;
    }
    InitWindow(cell_size*width+200,cell_size*height, "MazeMaster - Raylib");
}
void get_current_maze(const std::vector<std::vector<Cell>> &grid,int cell_size ){
    BeginDrawing();
    ClearBackground(BLUE);
    draw_maze(grid,cell_size);
    EndDrawing();
}


