// Exercise 2.39: Compile the following program to see what happens when you forget
// the semicolon after a class definition.Remember the message for future reference.
// struct Foo { /* empty */ } // Note: no semicolon
// int main()
// {
// 	return 0;
// }

#include <iostream>

struct Foo
{
	/*Empty*/
}

int main()
{
	return 0;
}