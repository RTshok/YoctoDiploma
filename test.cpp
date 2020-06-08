#include <iostream>
#include <chrono>
#include <thread>

int main (void) {
	const int maxCount = 10;
	using namespace std::chrono_literals;
	for(auto i = 0; i < maxCount; i++) {
		std::cout << "Counter is: " << i + 1<< std::endl;
		std::this_thread::sleep_for(1s);
	}		
	std::cout << "Counting finished.. Program ends up!" << std::endl;
	return 0;
}




