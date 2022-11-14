#include "Test.h"
#include <iostream>
Test::Test() {
	val = 0;
	std::cout << "Constuctor worked" << std::endl;
}
Test::~Test() {
	std::cout << "Deconstructor worked" << std::endl;
}