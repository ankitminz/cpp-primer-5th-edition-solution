// Exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.

#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}

	std::cout << "Sum of integers from 50 to 100 inclusively is " << sum << std::endl;
	std::cout << "\nIntegers from 10 to 0 are as follows - " << std::endl;
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
}