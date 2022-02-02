// Exercise 1.5: We wrote the output in one large statement.Rewrite the program to use
// a separate statement to print each operand.

#include <iostream>

int main()
{
	int num1;
	int num2;

	std::cout << "Program to find product of two integers" << std::endl;
	std::cout << "Enter first integer" << std::endl;
	std::cin >> num1;
	std::cout << "\nEnter second integer" << std::endl;
	std::cin >> num2;

	std::cout << "\nProduct of ";
	std::cout << num1;
	std::cout << " and ";
	std::cout << num2;
	std::cout << " is ";
	std::cout << num1 * num2 << std::endl;
	return 0;
}