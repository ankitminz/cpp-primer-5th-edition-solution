// Exercise 2.15: Which of the following definitions, if any, are invalid ? Why ?
// (a) int ival = 1.01; (b) int& rval1 = 1.01;
// (c) int& rval2 = ival; (d) int& rval3;

#include <iostream>

int main()
{
	int ival = 1.01; // Valid but digits after decimal are truncated
	std::cout << "ival = " << ival << std::endl;

	// Initializers must be an object not literal
	/*int& rval1 = 1.01;
	std::cout << "rval1 = " << rval1 << std::endl;*/

	int& rval2 = ival;
	std::cout << "rval2 = " << rval2 << std::endl;

	// Must be initialized while declaration
	/*int& rval3;
	std::cout << "rval3 = " << rval3 << std::endl;*/
	return 0;
}