/*Minh Nguyen
 * Exercise 6, question 1
 * input: a set of integer of an array
 * output: The sum of the array that was inputed by user
 */



#include <iostream>
using namespace std;

int main()
{	//declare variables
	int total = 0;
	int array_size = 5;
	int array[array_size];

	cout << "HELLO! This program will ask for 5 array integers, and give you their sum!" << endl;


	//filling in array
	for (int i=1; i <= array_size; i++)
	{	cout << "Enter an integer for array #" << i << " array: ";
		cin >> array[i];
		
		while(!cin) //integer validation
		{	cout << "not an integer, try again: ";
			cin.clear();
			cin.ignore();
			cin >> array [i];
		}
	}
	//getting sum of array
	for (int i=1; i <= array_size; i++)
	{			
		total = total + array[i];
	}
		cout << "The sum of the array integers you chose is: " << total << endl;

		cout << "good-bye." << endl;
return 0;
}
