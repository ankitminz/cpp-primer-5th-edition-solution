// Exercise 2.36: In the following code, determine the type of each variableand the value
// each variable has when the code finishes :
// int a = 3, b = 4;
// decltype(a) c = a;
// decltype((b)) d = a;
// ++c;
// ++d;

#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a; // c is of type int
	decltype((b)) d = a; // d is of int reference type
	++c;
	++d;

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
	return 0;
}