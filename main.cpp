#include "main.h"

using namespace lib;

int main() {
	int num = 100;
	int* ptr = &num;

	std::string hello = "hello";


	print(ptr);

	return 0;
}