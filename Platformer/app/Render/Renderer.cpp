#include "Renderer.h"

namespace Mastermind 
{
	namespace Graphics {
		Renderer::Renderer(std::function<void()> runnable)
		{
			renderThread = std::thread(runnable);
		}
		Renderer::~Renderer()
		{
			renderThread.join();
		}
	}
}