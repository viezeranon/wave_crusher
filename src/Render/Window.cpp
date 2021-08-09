#include "Window.h"

#include <iostream>


Window::Window(const char* title,
	int swapInterval,
	Waves* waves,
	GLFWmonitor* monitor,
	GLFWwindow* shared) : m_waves(waves)
{
	if (!glfwInit()) {
		std::cerr << "glfwInit error" << std::endl;
		return;
	}

	m_pWindow = glfwCreateWindow(width, height, title, monitor, shared);

	glfwMakeContextCurrent(m_pWindow);
	glfwSwapInterval(swapInterval);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return;
	}

	glClearColor(0.0, 0.0, 1.0, 1.0);
	glOrtho(0.0f, width, height, 0.0f, 0.0f, 1.0f);
}

Window::~Window()
{
	glfwDestroyWindow(m_pWindow);
	glfwTerminate();
}
void Window::render()
{
	glColor3f(0.f, 0.f, 0.f);
	glRecti(0, wavesUpY, m_waves->getLeftEdgeX(), height);
}


