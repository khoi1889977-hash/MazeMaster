#include "Entities/MazeGrid.h"
#include <ctime>
#include <cstdlib>
#include "Core/UI.h"
#include "Algorithms/MazeGenerator.h"


using namespace std;


int main() {
    srand((unsigned)time(nullptr));
    int height=50;
    int width=50;
    int cell_size=0;

    vector<vector<Cell>> grid;
    setup_window(height,width,cell_size);
    generate_maze(grid,height,width,cell_size);
    
    SetTargetFPS(60);

    
    while(!WindowShouldClose()){
        get_current_maze(grid , cell_size);
    }
    CloseWindow();
    return 0;
}
