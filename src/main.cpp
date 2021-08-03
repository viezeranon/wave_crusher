#include <iostream>
#include <Render/Window.h>

int main() {
	Render::Window* window = new Render::Window(640, 480, "title", 1);

	while (!window->shouldClose()) {
		window->clear();
		window->swapBuffers();
		window->pollEvents();
	}

	delete window;
	
}