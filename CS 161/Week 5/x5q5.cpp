/*Minh Nguyen
 * Exercise 5, question 5
 * Input: A number of row "n"
 * Output: Number of rows of pins, with the "*" indicating how many pins the input: row 'n' should yield
 */

#include <iostream>
using namespace std;
int stars(int n);
int row(int n);

int main ()
{
	int f;
	cout << "enter number of rows you want: " << endl;
	cin >> f;
	
	cout << row(f);

	return 0;
}


int stars(int n)
{
	if (n<0)
	return 0;

	else 
{	cout << "*";
	stars(n-1); 
}	
}

int row(int n)
{	
	if(n<0)
	return 0;

	else
{	row(n-1);
	stars(n-1);
}	
	cout << endl;
}
