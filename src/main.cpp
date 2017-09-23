#include <iostream>
#include <string>

#include "player.h"

template<typename T>
T prompt(T&& message = String) {
	std::cout << message;
	T value;
	std::cin >> value;
	return value;
}
int main(int argc, char** argv) {
	String name = prompt<std::string>("Enter player name: ");
	std::cout << "Are you sure " << name << " is your name?\n";

	getchar();
	return 0;
}
