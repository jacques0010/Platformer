#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>

namespace Mastermind 
{
	namespace Init 
	{
		class Window 
		{
		private:
			
			const char* m_Title;
			int m_Width, m_Height;
		public:
			GLFWwindow* m_Window;
			Window(const char* title, int width, int height);
			~Window();
			void update();
		private:
			bool init();
		};
	}
}