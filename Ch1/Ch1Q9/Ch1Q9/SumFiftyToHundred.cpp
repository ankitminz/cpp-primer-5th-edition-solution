// Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>

int main()
{
	int sum = 0, num = 50;

	std::cout << "Program to print sum of integers from 50 to 100 inclusive" << std::endl;
	while (num <= 100)
	{
		sum += num;
		++num;
	}

	std::cout << "\nSum of integers from 50 to 100 inclusive is " << sum << std::endl;
}