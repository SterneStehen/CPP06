#include <iostream>

int main()
{
	int a = 7;
	int b = 2;

	float x = static_cast<float>(a)/b;
	std::cout << x << "\n";
}