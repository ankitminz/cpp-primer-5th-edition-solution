// Exercise 1.25: Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;

	std::cout << "Program to calculate total transactions for each book" << std::endl;
	std::cout << "Enter book transaction" << std::endl;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}

		std::cout << total << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "No Data!" << std::endl;
		return -1;
	}

	std::cout << "Random statement" << std::endl;
}