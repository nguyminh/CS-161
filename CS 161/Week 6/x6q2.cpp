/*Minh Nguyen
 * Exercise 6, question 2
 * input: 2 string to be passed into function to be compared
 * output: Compares 2 strings to see if they are the equal or not
 */


#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

bool compare(char *one, char *two);

int main()
{	
	//declaring variables	
	char first[100];
	char second[100];

	cout << "This program compares 2 strings to see if they are the same. " << endl;		
	
	//Getting string variables 
	cout << "enter first string: ";
	cin >> first;

	cout << "enter second string: ";
	cin >> second;

	compare (first, second);
		
return 0;
}

bool compare(char *one, char *two)//using strcmp to compare the 2 strings
{
	int result;
	result = strcmp(one, two);
	
	if(result ==0)
	{
		cout << "The strings are the same! " << endl;
	}
	else
	{
		cout << "The strings are not the same! " << endl;
	}
}
