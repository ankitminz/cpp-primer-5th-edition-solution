// Exercise 1.11: Write a program that prompts the user for two integers.Print each
// number in the range specified by those two integers.

#include <iostream>

int main()
{
	int start, end;

	std::cout << "Program to print all integers in given range inclusively" << std::endl;
	std::cout << "Enter start value" << std::endl;
	std::cin >> start;
	std::cout << "\nEnter end value" << std::endl;
	std::cin >> end;
	while (start <= end)
	{
		std::cout << start << std::endl;
		++start;
	}
}