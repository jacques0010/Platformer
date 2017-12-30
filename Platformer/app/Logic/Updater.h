#pragma once
#include <thread>

namespace Mastermind {
	class Updater
	{
	private:
		std::thread updateThread;
	public:
		Updater(std::function<void()> runnable);
		~Updater();
		
	};
}