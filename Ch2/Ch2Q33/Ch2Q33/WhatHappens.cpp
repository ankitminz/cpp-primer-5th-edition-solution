// Exercise 2.33: Using the variable definitions from this section, determine what happens in each of these assignments :
// a = 42; b = 42; c = 42;
// d = 42; e = 42; g = 42;

#include <iostream>

int main()
{
	int i = 0, & r = i;
	auto a = r; // a is of int type
	const int ci = i, & cr = ci;
	auto b = ci; // b is of type int
	auto c = cr; // c is of type int
	auto d = &i; // d is of type int pointer (d is pointer to i)
	auto e = &ci; // e is of type const int pointer (e is pointer to ci)
	auto& g = ci; // g is of type const int reference (g is reference to ci)

	a = 42;
	b = 42;
	c = 42;
	//d = 42; Illegal, pointer can only hold address
	//e = 42; Illegal, pointer can only hold address
	//g = 42; Illegal, reference cannot hold literal

	std::cout << "i = " << i << ", r = " << r << ", a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", *d = " << *d <<
		", e = " << e << ", *e = " << *e << ", g = " << g << std::endl;
	return 0;
}