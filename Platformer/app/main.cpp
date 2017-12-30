#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include "Render\Renderer.h"
#include "Render\Window.h"

using namespace Mastermind;

void render()
{
	Init::Window window("Test", 800, 600);
	while (!glfwWindowShouldClose(window.m_Window))
	{
		window.update();
	}
}

int main()
{
	Graphics::Renderer rThread(render);
}