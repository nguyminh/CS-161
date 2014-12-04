/*Minh Nguyen
 * Exercise 5, question 6
 * input: initial money, interest rate, and years to acrue interest
 * output: Amount of money at any given intial amount, interest rate and years to acrue
 */


#include <iostream>
#include <math.h>
using namespace std;

double compound(double first, double interest, double years);

int main ()
{
	
	double rate, initial, time;

	cout << "input initial amount: ";
	cin >> initial;
	cout << endl;

	cout << "input interest rate per year: ";
	cin >> rate;
	cout << endl;
	
	cout << "Enter years to acrue: ";
	cin >> time;
	cout << endl;
	
	compound(initial, rate, time);
	cout << "Your saving after " << time << " years of acruing is: " << compound(initial, rate, time) << endl;	


return 0;
}

double compound(double first, double interest, double years)
{	
	double money;
	if (years==1)
{	return first*(1 + interest);
}
	else
{	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);   
	return (1 + interest)*(compound(first, interest, --years));
					       
		
}
}

	



