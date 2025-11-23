#include "raylib.h"
#include <vector>
#include "Entities/MazeGrid.h"

using namespace std;


int main() {
   
    int height=10;
    int width=10;
    int cell_size=32;
    InitWindow(height*cell_size,width*cell_size, "MazeMaster - Raylib");
    vector<vector<Cell>> grid;
    create_maze(grid,height,width);
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLUE);
        draw_maze(grid,cell_size);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}
