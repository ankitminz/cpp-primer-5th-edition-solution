// Exercise 2.13: What is the value of j in the following program ?
// int i = 42;
// int main()
// {
// 	int i = 100;
// 	int j = i;
// }

#include <iostream>

int i = 100;

int main()
{
	int i = 100;
	int j = i; // 100

	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	return 0;
}