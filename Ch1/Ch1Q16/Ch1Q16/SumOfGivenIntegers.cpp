// Exercise 1.16: Write your own version of a program that prints the sum of a set of
// integers read from cin.

#include <iostream>

int main()
{
	int sum = 0, num;

	std::cout << "Program to find sum of given integers" << std::endl;
	while (std::cin >> num)
	{
		sum += num;
	}

	std::cout << "\nSum = " << sum << std::endl;
}