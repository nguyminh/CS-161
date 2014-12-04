/*Minh Nguyen
 * Exercise 4 question 3
 * input: number of liters consumed for car, and miles traveled
 * output: Miles per gallon of vehicle
 * converts liters to gallon, then gallon / mile
 */


#include <iostream>

using namespace std;

double ligal=.264179;
double convert(double &lit, double &mil);

int main()	
{	
	char ans;
	double liter, mile;
do
{	cout << "hello, this program will give you your estimated MPG for your car when gas entered is liters" << endl;

	cout << "enter liters of gas consumed: ";
	cin >> liter;
	cout << endl;
	
	cout << "enter number of miles traveled: ";
	cin >> mile;
	cout << endl;

	
	convert(liter, mile);
	
	cout << "would you like to try again? (y/n): ";
	cin >> ans;
}	while ((ans=='y') && (ans=='Y'));	
	cout << "thank you, bye." << endl;	
	
	return 0;

}

double convert(double &lit, double &mil)
{
	double gal_conv = lit;
	double mpg = mil;

	gal_conv = (lit*ligal);
	mpg = (mil/gal_conv);

	cout << "your miles per galon on your vehicle is: " << mpg << endl;
	
	return 0;
}	
