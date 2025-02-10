cmake_minimum_required(VERSION 3.10)
project(scanner)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})  # 🔥 Add this line!
include_directories(headers/include)
add_executable(executable_name main.cpp)
target_link_libraries(executable_name ${OpenCV_LIBS})
