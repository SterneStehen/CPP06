#include <iostream>

int main()
{
	int i = 30000;
	char c = i;

	std::cout << static_cast<int>(c) << std::endl;
	return 0;
}