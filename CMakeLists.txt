cmake_minimum_required(VERSION 3.5)

project(timeclock)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SOURCE_FILES src/*.cpp)

add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})

target_link_libraries(
    ${PROJECT_NAME} 
    )
