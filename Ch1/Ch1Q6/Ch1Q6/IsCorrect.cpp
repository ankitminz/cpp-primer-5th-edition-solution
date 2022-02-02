// Exercise 1.6: Explain whether the following program fragment is legal.
// std::cout << "The sum of " << v1;
// << " and " << v2;
// << " is " << v1 + v2 << std::endl;
// If the program is legal, what does it do ? If the program is not legal, why not? How
// would you fix it ?

#include <iostream>
 
int main()
{
    int v1, v2;

    std::cout << "Program to add two integers" << std::endl;
    std::cout << "Enter first integer" << std::endl;
    std::cin >> v1;
    std::cout << "\nEnter second integer" << std::endl;
    std::cin >> v2;

    // You can just remove unnecessary semicolons and it would work even if it spans multiple lines but it looks ugly
    std::cout << "The sum of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;
}