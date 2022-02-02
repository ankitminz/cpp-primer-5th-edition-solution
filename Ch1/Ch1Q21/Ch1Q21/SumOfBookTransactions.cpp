// Exercise 1.21: Write a program that reads two Sales_item objects that have the
// same ISBN and produces their sum.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book1, book2, sum;

	std::cout << "Program to add two book transaction" << std::endl;
	std::cout << "Enter first book transaction" << std::endl;
	std::cin >> book1;
	std::cout << "\nEnter second book transaction" << std::endl;
	std::cin >> book2;
	sum = book1 + book2;
	std::cout << "\nSum = " << sum << std::endl;
}