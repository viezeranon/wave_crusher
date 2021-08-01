project(WaveCrusher)

add_executable(test
			   src/main.cpp)
			   
add_subdirectory(lib/glfw)
target_link_libraries(test glfw)
			   