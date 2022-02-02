// Exercise 2.42: Write your own version of the Sales_data.h header and use it to
// rewrite the exercise from § 2.6.2 (p. 76).

#include <iostream>
#include <string>
#include "SalesData.h"

int main()
{
	SalesData data1, data2;
	double price = 0.0;

	std::cout << "Enter first transaction - Book No., No. of units sold and price" << std::endl;
	std::cin >> data1.bookNo >> data1.unitsSold >> price;
	data1.revenue = data1.unitsSold * price;
	std::cout << "\nEnter second transaction - Book No., No. of units sold and price" << std::endl;
	std::cin >> data2.bookNo >> data2.unitsSold >> price;
	data2.revenue = data2.unitsSold * price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalUnitsSold = data1.unitsSold + data2.unitsSold;
		double totalRevenue = data1.revenue + data2.revenue;
		double averagePrice = totalRevenue / totalUnitsSold;
		if (totalUnitsSold != 0)
		{
			std::cout << "Book No. = " << data1.bookNo << " Total units sold = " << totalUnitsSold << " Total revenue = " << totalRevenue <<
				" Average price = " << averagePrice << std::endl;
		}
		else
		{
			std::cout << "Zero transactions!" << std::endl;
		}

		return 0;
	}
	else
	{
		std::cerr << "Book No. is different" << std::endl;
		return 1;
	}
}