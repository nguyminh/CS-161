/*Minh Nguyen
 * Exercise 4, question 4
 * input: height, weight, and age
 * output: hat size, jacket size, and waist based on 3 inputs
 */

#include <iostream>

using namespace std;
double get_height();
double get_weight();
double get_age();
double hat_size(double &weight_stuff, double &height_stuff);
double jacket_size(double &weight_stuff, double &height_stuff, double &age_stuff);
double waist(double &weight_stuff, double &age_stuff);

int main()
{	double height, weight, age;
	char ans;
do
{	height = get_height();
	weight = get_weight();
	age = get_age();

	hat_size(height, weight);	
	jacket_size(height, weight, age);
	waist(weight, age);	
	
	cout << "would you like to try again? (y/n): ";
	cin >> ans;
}	while((ans=='y')||(ans=='Y'));
	cout << "good bye." << endl;
return 0;	

}
	
double get_height()
{	
	double height_data;
	cout << "enter height in inches: ";
	cin >> height_data;

	return height_data;
}

double get_weight()
{	double weight_data;
	cout << "enter weight in pounds: ";
	cin >> weight_data;
	return weight_data;
}

double get_age()
{	double age_data;
	cout << "enter age: ";
	cin >> age_data;
	return age_data;
}

double hat_size(double &weight_stuff, double &height_stuff)
{
	double weight = weight_stuff;
	double height = height_stuff;
	double hatsize;
	
	hatsize = ((weight/height)*2.9);
	cout << "your hatsize is: " << hatsize << endl;

	return hatsize;
}
	
double jacket_size(double &weight_stuff, double &height_stuff, double &age_stuff)
{
	double height = height_stuff;
	double weight = weight_stuff;
	double age = age_stuff;
	double jacketsize;
	int vari;	

	jacketsize = ((height*weight)/288);
	
	if (age<=39)
	cout << "your jacketsize is: " << jacketsize << endl;
	else
{	for (int vari =30; (vari +10) <=age; vari+=10)
	jacketsize=jacketsize +.125;
	cout << "your jacketsize adjusted is:  " << jacketsize << endl;	
}	return jacketsize;
}

double waist(double &weight_stuff, double &age_stuff)
{
	double weight = weight_stuff;
	double age = age_stuff;
	int vari;	
	double waistsize;
	
	waistsize = (weight/5.7);

	if (age<=29)
	cout << "your waist in inches is: " << waistsize << endl;
	else
{	for (int vari =28; (vari + 2) <=age; vari+=2)
	waistsize = waistsize + .10;
	cout << "Your waist size in inches is:  " << waistsize << endl;
	
}	
	return waistsize;
}	
