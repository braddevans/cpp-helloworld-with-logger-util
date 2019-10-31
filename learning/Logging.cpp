#include <iostream>
#include <string>
#include "util.h"

void log_info(const std::string& s) {
	std::cout << "[log] info: " << s << "\n";
	return;
}

void log(const std::string& s) {
	std::cout << s << "\n";
	return;
}