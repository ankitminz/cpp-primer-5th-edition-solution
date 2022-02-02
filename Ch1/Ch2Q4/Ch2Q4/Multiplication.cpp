// Exercise 1.4: Our program used the addition operator, +, to add two numbers.Write
// a program that uses the multiplication operator,*, to print the product instead.

#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "Program to find product of two integers" << std::endl;
	std::cout << "Enter first integer" << std::endl;
	std::cin >> num1;
	std::cout << "\nEnter second integer" << std::endl;
	std::cin >> num2;
	std::cout << "\nProduct of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;
	return 0;
}