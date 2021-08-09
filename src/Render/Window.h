#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <main.h>
#include <Wave/Waves.h>


class Window {
public:
	Window(const char* title,
		int swapInterval,
		Waves* waves,
		GLFWmonitor* monitor = nullptr,
		GLFWwindow* shared = nullptr);
	~Window();

	GLFWwindow* getWindowPointer() { return m_pWindow; }

	int shouldClose() { return glfwWindowShouldClose(m_pWindow); }
	void swapBuffers() { glfwSwapBuffers(m_pWindow); }
	void pollEvents() { glfwPollEvents(); }
	void clear() { glClear(GL_COLOR_BUFFER_BIT); }
	void flush() { glFlush(); }

	void render();

private:

	int m_GLFWwindowheight;
	GLFWwindow* m_pWindow;
	Waves* m_waves;
};
