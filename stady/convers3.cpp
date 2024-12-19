#include <iostream>
#include <typeinfo>

int main()
{
	double a = 3.0;
	short b = 2;
	std::cout << typeid(a + b).name() << " " << a + b << std::endl;
	return 0;
}