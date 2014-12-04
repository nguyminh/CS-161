/*Minh Nguyen
 * Exercise 5, question 4
 * input: Any positive integer
 * output: The fibonacci value of that integer input
 */

#include <iostream>
using namespace std;
int fibo(int n);


int main()
{
	int f;
	cout << "Enter the number that you want to see it's Fibonacci's value for: ";
	cin >> f;

	fibo(f);
	cout << "The Fibonacci value for " << f << " is: " << fibo(f) << endl;
return 0;
}

int fibo(int n)
{	
 	
	if (n==0)
{	return 0;
}
	if(n==1 || n==2)
{	return 1;
}	
	else {
	return (fibo(n-1) + fibo(n -2));
}
}
