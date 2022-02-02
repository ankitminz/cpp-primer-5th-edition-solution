// Exercise 2.24: Why is the initialization of p legal but that of lp illegal ?
// int i = 42; void* p = &i; long* lp = &i;

#include <iostream>

int main()
{
	int i = 42;
	void* p = &i; // Legal because a void pointer can hold address of any type variable
	//long* lp = &i; Illegal because a long pointer can only hold address of long variable

	std::cout << "i = " << i << ", p = " << p << std::endl;
	return 0;
}