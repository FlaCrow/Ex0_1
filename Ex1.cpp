#include <iostream>

void funcSwap(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

int main()
{
	int a = 5, b = 10;
	funcSwap(a, b);
	std::cout << a << " " << b;
}
