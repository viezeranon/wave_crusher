set(PROJECT_NAME WaveCrusher)
set(CMAKE_CXX_STANDARD 17)

cmake_minimum_required(VERSION 3.20)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
			   src/main.cpp 
			   src/Render/Window.cpp
			   src/Render/Window.h 
			   src/Wave/Waves.cpp
			   src/Wave/Waves.h
			   src/main.h)

include_directories(src)

include_directories(lib/glad/include)
add_library(glad lib/glad/src/glad.c)
target_link_libraries(${PROJECT_NAME} glad)
			   
add_subdirectory(lib/glfw)
target_link_libraries(${PROJECT_NAME} glfw)
			   