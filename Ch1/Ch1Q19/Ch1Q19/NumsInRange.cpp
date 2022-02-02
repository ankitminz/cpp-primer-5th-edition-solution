// Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that
// printed a range of numbers so that it handles input in which the first number is smaller
// than the second.

#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "Program to print integers in given range" << std::endl;
	std::cout << "Enter first integer" << std::endl;
	std::cin >> num1;
	std::cout << "\nEnter second integer" << std::endl;
	std::cin >> num2;
	std::cout << std::endl;
	if (num1 < num2)
	{
		for (int i = num1; i <= num2; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = num2; i <= num1; ++i)
		{
			std::cout << i << std::endl;
		}
	}
}