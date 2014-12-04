/*Minh Nguyen
 * Exercise 7, question 2
 * input: User input an array of 5 integers
 * output: Largest and smallest integer will be printed out
 */

#include <iostream>
using namespace std;

void fillarray(int numbers[], int size); //array to fill dynamically depending on size of input

int main()
{	
	int array_size, *array; 

	cout << "****************************************************************" << endl;
	cout << "This program will create a dynamic array of integers based on user input." << endl;		
	cout << endl << endl;
	cout << "Input how many numbers you'd like in this array: ";
	cin >> array_size; //input size of array here

		if (!cin.good()) //if input is not an integer, input is invalid
		{	cin.clear();
			cin.ignore(1000, '\n');
			cout << "Not an integer, try inputting an integer please: ";
			cin >> array_size;
		}

	array = new int[array_size];

	fillarray(array, array_size);


return 0;
}

void fillarray(int numbers[], int size)
{
	
	int big, small;
	big=numbers[0]; //Necessary bit of code to remove bug for obtaining greatest number
	cout << "Enter " << size << " integers: " << endl;
	for (int i=1; i < size+1; i++) //for loop to enter arrays
	{	
		cout << "#" << i << ": ";
		cin >> numbers[i];
		if (!cin.good()) //if array is not an integer, input is invalid
		{	cin.clear();
			cin.ignore(1000, '\n');
			cout << "Not an integer, try again: ";	
			cin >> numbers[i];
		}
	
		if (numbers[i] > big) // to obtain greatest number
			big = numbers[i];
		if (numbers[i] < small) // to obtain smallest number
			small = numbers[i];
	}

cout << "The greatest number in this array is: " << big << endl;
cout << "The smallest number in this array is: " << small << endl;

}
