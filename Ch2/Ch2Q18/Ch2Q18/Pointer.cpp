// Exercise 2.18: Write code to change the value of a pointer.Write code to change the
// value to which the pointer points.

#include <iostream>

int main()
{
	int num1 = 4, * numP = &num1;
	int num2 = 10;
	std::cout << "num1 = " << num1 << ", numP = " << numP << ", *numP = " << *numP << ", num2 = " << num2 << std::endl;

	numP = &num2;
	std::cout << "num1 = " << num1 << ", numP = " << numP << ", *numP = " << *numP << ", num2 = " << num2 << std::endl;

	*numP = 15;
	std::cout << "num1 = " << num1 << ", numP = " << numP << ", *numP = " << *numP << ", num2 = " << num2 << std::endl;
	return 0;
}