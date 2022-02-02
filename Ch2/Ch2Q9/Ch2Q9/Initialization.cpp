// Exercise 2.9: Explain the following definitions.For those that are illegal, explain
// what’s wrongand how to correct it.
// (a)std::cin >> int input_value; (b) int i = { 3.14 };
// (c) double salary = wage = 9999.99; (d) int i = 3.14;

#include <iostream>

int main()
{
	//std::cin >> int input_value; // initialization is not allowed
	//std::cout << input_value << std::endl;
	//int i = { 3.14 }; // double to int requires narrowing conversion
	//std::cout << i << std::endl;
	//double salary = wage = 9999.99; // wage is not defined
	//std::cout << salary << " " << wage << std::endl;
	//int i = 3.14; // Reinitialization not allowed
	//std::cout << i << std::endl;

	// Corrrect
	int input_value;
	std::cin >> input_value;
	std::cout << "input_value = " << input_value << std::endl;
	double salary, wage;
	salary = wage = 9999.99;
	std::cout << "salary  = " << salary << " wage = " << wage << std::endl;
	int i = 3.14; // All digits after decimal will be truncated
	std::cout << i << std::endl;
	return 0;
}