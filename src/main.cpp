#include <iostream>
#include <Render/Window.h>

int main() {
	auto waves = new Waves(20, 30);
	auto window = new Window("title", 1, waves);

	while (!window->shouldClose()) {
		window->clear();
		window->render();
		window->flush();
		window->swapBuffers();
		window->pollEvents();
	}

	delete window;
	delete waves;

}