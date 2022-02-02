// Exercise 2.37: Assignment is an example of an expression that yields a reference type.
// The type is a reference to the type of the left - hand operand.That is, if i is an int, then
// the type of the expression i = x is int& .Using that knowledge, determine the type
// and value of each variable in this code :
// 	int a = 3, b = 4;
// decltype(a) c = a;
// decltype(a = b) d = a;

#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a; // c is of type int
	decltype(a = b) d = a; // d is of type int reference

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
	return 0;
}