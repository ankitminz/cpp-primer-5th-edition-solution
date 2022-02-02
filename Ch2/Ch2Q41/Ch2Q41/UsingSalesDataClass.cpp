// Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22),
// § 1.5.2 (p. 24), and § 1.6 (p. 25).For now, you should define your Sales_data class in
// the same file as your main function.

#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned unitsSold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data data1, data2;
	double price = 0;

	std::cout << "Enter first transaction data - Book no., units sold and price respectively" << std::endl;
	std::cin >> data1.bookNo >> data1.unitsSold >> price;
	data1.revenue = data1.unitsSold * price;
	std::cout << "\nEnter second transaction data - Book no., units sold and price respectively" << std::endl;
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
				" Average price of book = " << averagePrice << std::endl;
		}
		else
		{
			std::cout << "Zero transaction!" << std::endl;
		}

		return 0;
	}
	else
	{
		std::cerr << "Book ISBN is different" << std::endl;
		return 1;
	}
}