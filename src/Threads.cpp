#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id: " << std::this_thread::get_id() << std::endl;

	while (!s_Finished)
	{
		std::cout << "Working..." << std::endl;
		std::this_thread::sleep_for(1s);
	}
	
}

int main() 
{
	// Pass in a function pointer and start a new thread
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;

	// join() tells the main thread to wait for the worker thread to finish before continuing
	worker.join();
	std::cout << "Finished." << std::endl;
	std::cout << "Started thread id: " << std::this_thread::get_id() << std::endl;

	std::cin.get();
}