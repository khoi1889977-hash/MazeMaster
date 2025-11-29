#pragma once


#include <vector>

#define SYSTEM_WIDTH 200
#define WINDOW_HEIGHT 1500
#define WINDOW_WIDTH 1500
struct cell;

static void draw_maze(const std::vector<std::vector<cell>> &grid,int cell_size);
void setup_window(const int& height,const int& width,int& cell_size );
void get_position( int &start_x,int &end_x,int &start_y,int &end_y,const int &cell_size);
void get_show_solution(bool solution);
void draw_solution_path(const std::vector<std::vector<cell>> &grid,const int &cell_size);
void get_current_state(const std::vector<std::vector<cell>> &grid,int cell_size );