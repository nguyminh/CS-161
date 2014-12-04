/*Minh Nguyen
 * Exercise 7, question 1. Creating a pointer and a variable
 * input: Asks for an integer from user
 * output: Shows the variable input, the addresses of the variable and pointer, and the pointer value of that input
 */


#include <iostream>
using namespace std;

void function_pointer();


int main()
{
	
function_pointer();
	


return 0;
}

void function_pointer()
{
	int *pointer, var;
	
	

	cout << "Enter an integer for our pointer variable: ";
	cin >> var;

	pointer= &var;
	
	cout << endl << "The var is: " << var << endl;
	cout << "The &var is: " << &var << endl;
	cout << "The pointer is: " << pointer << endl;
	cout << "The deferencing *pointer is: " << *pointer << endl;
	
}
