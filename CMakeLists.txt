# 1. Yêu cầu phiên bản CMake tối thiểu
cmake_minimum_required(VERSION 3.10)

# 2. Đặt tên dự án là MazeMaster
project(MazeMaster)

# 3. Chỉ định nơi chứa các bản vẽ thiết kế (.h) là thư mục include
include_directories(include)

# 4. Gom tất cả file code (.cpp) trong thư mục src vào biến SOURCES
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 5. Lệnh cho máy tạo ra file chạy (.exe) từ đống code trên
add_executable(MazeMaster ${SOURCES})