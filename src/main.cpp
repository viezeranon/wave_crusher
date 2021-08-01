#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
	if (!glfwInit())
	{
    	std::cout << "No, no" << std::endl;
    	return -1;
	}
	GLFWwindow* pWindow = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

	while (!glfwWindowShouldClose(pWindow))
	{
    	glfwSwapBuffers(pWindow);
    	glfwPollEvents();
	}

	glfwDestroyWindow(pWindow);
	glfwTerminate();
}