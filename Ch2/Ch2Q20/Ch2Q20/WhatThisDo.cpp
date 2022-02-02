// Exercise 2.20: What does the following program do ?
// int i = 42;
// int* p1 = &i;
// *p1 = *p1 * *p1;

#include <iostream>

int main()
{
	int i = 42;
	int* p1 = &i; // Initializing pointer p1 to address of i
	*p1 = *p1 * *p1; // Value of pointer is equal to value of pointer * value of pointer
	std::cout << "i = " << i << ", *p1 = " << *p1 << std::endl;
	return 0;
}