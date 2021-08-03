#include "Window.h"

#include <iostream>

namespace Render {
	Window::Window(int width,
				   int height,
				   const char* title,
				   int swapInterval,
				   GLFWmonitor* monitor,
				   GLFWwindow* shared) : m_width(width), m_height(height)
	{
		if (!glfwInit()) {
			std::cerr << "glfwInit error" << std::endl;
			return;
		}

		m_pWindow = glfwCreateWindow(m_width, m_height, title, monitor, shared);

		glfwMakeContextCurrent(m_pWindow);
		glfwSwapInterval(swapInterval);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			std::cout << "Failed to initialize GLAD" << std::endl;
			return;
		}

		glClearColor(0.0, 0.0, 1.0, 1.0);
	}

	Window::~Window()
	{
		glfwDestroyWindow(m_pWindow);
		glfwTerminate();
	}
}

