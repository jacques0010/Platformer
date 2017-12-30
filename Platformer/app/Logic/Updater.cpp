#include "Updater.h"

namespace Mastermind
{
	Updater::Updater(std::function<void()> runnable)
	{
		updateThread = std::thread(runnable);
	}
	Updater::~Updater()
	{
		updateThread.join();
	}
}