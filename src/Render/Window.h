#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Render {
	class Window {
	public:
		Window(int _width,
			   int _height,
			   const char* title,
			   int swapInterval,
			   GLFWmonitor* monitor = nullptr,
			   GLFWwindow* shared = nullptr);
		~Window();

		GLFWwindow* getWindowPointer() { return m_pWindow; }
		int getWidth() { return m_width; }
		int getHeight() { return m_height; }

		int shouldClose() { return glfwWindowShouldClose(m_pWindow); }
		void swapBuffers() { glfwSwapBuffers(m_pWindow); }
		void pollEvents() { glfwPollEvents(); }
		void clear() { glClear(GL_COLOR_BUFFER_BIT); }

	private:
		int m_width;
		int m_height;
		int m_GLFWwindowheight;
		GLFWwindow* m_pWindow;
	};
}