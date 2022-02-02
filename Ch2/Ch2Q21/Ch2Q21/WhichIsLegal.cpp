// Exercise 2.21: Explain each of the following definitions.Indicate whether any are illegal and, if so, why.
// int i = 0;
// (a) double* dp = &i; (b) int* ip = i; (c) int* p = &i;

#include <iostream>

int main()
{
	int i = 0;
	//double* dp = &i; Illegal, double pointer can't hold address of integer value
	//int* ip = i; Illegal because pointer holds address not value
	int* p = &i;
	std::cout << "i = " << i << ", *p = " << *p << ", p = " << p << std::endl;
	return 0;
}