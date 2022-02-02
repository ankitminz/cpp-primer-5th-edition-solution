// Exercise 1.22: Write a program that reads several transactions for the same ISBN.
// Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, sum;

	std::cout << "Program to find sum of given transactions" << std::endl;
	std::cout << "Enter book transactions" << std::endl;
	while (std::cin >> book)
	{
		sum += book;
	}

	std::cout << "\nSum = " << sum << std::endl;
}