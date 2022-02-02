// Exercise 2.10: What are the initial values, if any, of each of the following variables ?
// std::string global_str;
// int global_int;
// int main()
// {
// 	int local_int;
// 	std::string local_str;
// }

#include <iostream>

std::string global_str; // empty string
int global_int; // 0

int main()
{
	int local_int; // undefined
	std::string local_str; // empty string

	std::cout << "global_str = " << global_str << std::endl;
	std::cout << "global_int = " << global_int << std::endl;
	std::cout << "local_int = " << local_int << std::endl;
	std::cout << "local_str = " << local_str << std::endl;
	return 0;
}