// Exercise 1.23: Write a program that reads several transactions and counts how many
// transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, currentBook;

	std::cout << "Program to count transactions of each book" << std::endl;
	if (std::cin >> book)
	{
		int count = 1;
		while (std::cin >> currentBook)
		{
			if (book.isbn() == currentBook.isbn())
			{
				++count;
			}
			else
			{
				std::cout << count << " transactions occur for book having ISBN " << book.isbn() << std::endl;
				book = currentBook;
				count = 1;
			}
		}
	}

	return 0;
}