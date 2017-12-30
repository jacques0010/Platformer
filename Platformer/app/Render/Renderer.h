#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <thread>

namespace Mastermind {
	namespace Graphics {
		class Renderer
		{
		private:
			std::thread renderThread;
		public:
			Renderer(std::function<void()> runnable);
			~Renderer();
		};
	}
}