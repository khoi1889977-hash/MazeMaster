#include "Entities/MazeGrid.h"
#include "raylib.h"
#include <cstdlib>
#include <algorithm>
using namespace std;

static void create_maze(std::vector<vector<Cell>> &grid,int height,int width){
    grid.resize(height);
    for (int i=0; i<height;i++){
        grid[i].resize(width);
    }
}
static bool check_cell(int x,int y,const std::vector<std::vector<Cell>> &grid,int height,int width){
    int n=0;
    if(!(x>=0&&y>=0&&x<width&&y<height&&!grid[y][x].visited)){
        return false;
    }
    if (y==0||x==0||y==height-1||x==width-1){
        return false;
    }
    if (y+1<height && !grid[y+1][x].is_block){
        n++;
    }
    if (y-1>=0 &&!grid[y-1][x].is_block){
        n++;
    }
    if (x+1<width&& !grid[y][x+1].is_block){
        n++;
    }
    if (x-1>=0&&!grid[y][x-1].is_block){
        n++;
    }
    if (n>1){
        return false;
    }
    return true;
}
static void carve_maze(int x,int y,std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size){
    grid[y][x].is_block=false;
    grid[y][x].visited=true;
    BeginDrawing();
    ClearBackground(BLUE);    
    draw_maze(grid,cell_size);          
    EndDrawing();
    WaitTime(0.02);
    int dirs[4]={0,1,2,3};//0 :lên
                          //1 Xuống
                          //2 Trái
                          //3 Phải
                          
    for(int i=0;i<4;i++){
        int j =rand()%4;
        swap(dirs[j],dirs[i]);
    }
    for ( int i:dirs){
        int nx=x;
        int ny=y;
        switch(i){
            case 0:
            ny--;
            break;
            case 1:
            ny++;
            break;
            case 2:
            nx--;
            break;
            case 3:
            nx++;
            break;
        }
        if(check_cell(nx,ny,grid,height,width)){
            carve_maze(nx,ny,grid,height,width,cell_size);
        }
    }
}
void generate_maze(std::vector<std::vector<Cell>> &grid,int height,int width,int cell_size){
    create_maze(grid,height,width);
    carve_maze(1,1,grid,height,width,cell_size);
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