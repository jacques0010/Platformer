#include "Window.h"

namespace Mastermind
{
	namespace Init
	{
		Window::Window(const char* title, int width, int height)
			:m_Title(title), m_Width(width), m_Height(height)
		{
			init();
		}
		Window::~Window()
		{

		}
		bool Window::init()
		{
			if (!glfwInit())
			{
				return false;
			}
			m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
			if (!m_Window)
			{
				return false;
			}
			glfwMakeContextCurrent(m_Window);
			if (glewInit() != GLEW_OK)
			{
				return false;
			}
		}
		void Window::update()
		{
			glfwSwapBuffers(m_Window);
			glfwPollEvents();
		}
	}
}