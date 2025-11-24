#include "Entities/MazeGrid.h"
using namespace std;

void create_maze(std::vector<vector<Cell>> &grid,int height,int width){
    grid.resize(height);
    for (int i=0; i<height;i++){
        grid[i].resize(width);
    }
}
