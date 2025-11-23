#include "raylib.h"
#include <vector>
#include "Entities/MazeGrid.h"
#include <ctime>
#include <cstdlib>


using namespace std;


int main() {
    srand((unsigned)time(nullptr));
    int height=30;
    int width=30;
    int cell_size=32;
    InitWindow(height*cell_size,width*cell_size, "MazeMaster - Raylib");
    vector<vector<Cell>> grid;
    generate_maze(grid,height,width,cell_size);
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
