// Exercise 2.35: Determine the types deduced in each of the following definitions.Once
// you’ve figured out the types, write a program to see whether you were correct.
// const int i = 42;
// auto j = i; const auto& k = i; auto* p = &i;
// const auto j2 = i, & k2 = i;

#include <iostream>

int main()
{
	const int i = 42;
	auto j = i; // j is of int type
	const auto& k = i; // k is of const int reference type
	auto* p = &i; // p is of const int pointer type
	const auto j2 = i, & k2 = i; // j2 is of const int type and k2 is of const int reference type

	std::cout << "i = " << i << ", j = " << j << ", k = " << k << ", p = " << p << ", *p = " << *p << ", j2 = " << j2 << ", k2 = " << k2 <<
		std::endl;
	return 0;
}