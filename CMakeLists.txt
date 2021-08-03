set(PROJECT_NAME WaveCrusher)
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
			   src/main.cpp 
			   src/Render/Window.cpp
			   src/Render/Window.h 
			   src/Wave/Wave.cpp)

include_directories(src)

include_directories(lib/glad/include)
add_library(glad lib/glad/src/glad.c)
target_link_libraries(${PROJECT_NAME} glad)
			   
add_subdirectory(lib/glfw)
target_link_libraries(${PROJECT_NAME} glfw)
			   