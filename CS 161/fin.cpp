/*Minh Nguyen
 * 3/16/2014
 * Final project
 * Inputs include very basic conditional statements depending on which requirement you are in.
 * output: Displays many different demonstrations of requirement list
 */



#include <iostream>
#include <limits.h>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <bitset>
#include <cassert>
#include <iomanip>
#include <cstring>


using namespace std;

const int BITS = 8; //global variable to demonstrate twos complement
void intro(); //introduction to my program
void binary();  //req. 1
//*****************************
void twos_complement(); //req. 2
int convert(char binary[]); //function to convert binary numbers into integers
//*****************************
void macro(); //req.3
void output(); //req. 4
void input(); //req. 5
void type_cast(); //req. 6
void conditional(); //req 7
void logical(); // req 8
void loop(); // req 9
void random_gen(); //req 10
void dem_error(); //req 11
void bug_tricks();//req 12
void functions(); //req 13
void functional_decomposition(); //req 14
void scope(); //req 15
//*****************************
void passing(); //req 16
void dub_int(int b); //function to double an integer to demonstrate pass by value
void halved(int &b); //function to halve an integer to demonstrate pass by reference
//*****************************
void overload(); //req 17
void dem_overload(int a); //same function name only used if input is int
void dem_overload(double b); //same function name only used if input is a double
void dem_overload(char c); //same function name only used if input is a character
//******************************************
void simple_string(); //req18
//***************************
void recursion(); //req 19
int factorial(int x); //function to find a factorial to demonstrate recursion
//***************************
void multi_array();//req 20
//*******************************************
void dynamic_array(); //req 21
void example_array(int number[], int size); //function to demonstrate a sample dynamic array by user input
//********************************************
void commandline();// req 22
//***************************************
void structure(); //req 23
struct structure_demo //demonstration of struct. Gives my name, age, height and weight
{
	char name[20];
	int age;
	int height;
	int weight;

};
//*****************************************
void classes(); //req 24
class minhsclass // demonstration of class, has 2 different objects that are called sentence and math.
{
	public:
	void sentence() //sample function to cout in class requirement for objects
	{
		cout << "This is a sample sentence for a class demonstration." << endl;
	}
	void math() //sample math function to do to show objects in class
	{
		int x,y,z;
		cout << "Another demonstration of class using a simple addition problem. Enter in an integer: ";
		cin >> x;
		cout << "Enter in another integer: ";
		cin >> y;
		cout << x << " + " << y << " = " << x+y;
		
	}

};
//***************************************************************************
void pointer_array(); // req 25
void struct_pointer(); //req 26. Unable to fulfill this requirement
void object_pointer(); //req 27. Unable to fulfill this requirement






int main (int argc, char* argv[]) //sample command line inputs, will print out whatever the inputs are.
{
				if(argc==1) //command line input sample. if no arguments given it will start program
					intro();
				else
				{	for(int i=1; i < argc; i++) // else the inputs on command line will be printed out and program starts
					cout << "A demonstration of command line. Your command inputs are: " << argv[i] << endl;
				}






	int choice; //variable to choose what requirement grader wants to see demonstrated


	cout << endl << endl << endl << endl << endl << endl;




do //entire program runs on a do while loop to continue choosing for next requirement after one is finished
{	cout << endl; 
	cout << "Enter requirement number here. To quit the program, enter in 30: ";	
	cin >> choice; //choice of requirement entered here
	cout << endl << endl;
	cout << "**********************************************************************************************" << endl;
	switch(choice) //switch statement with 27 cases, one for each function of demonstrations.
	{	
		case 1: binary(); break;
		case 2:	twos_complement(); break;
		case 3: macro(); break;
		case 4: output(); break;
		case 5: input(); break;
		case 6: type_cast(); break;
		case 7: conditional(); break;
		case 8: logical(); break;
		case 9: loop(); break;
		case 10: random_gen(); break;
		case 11: dem_error(); break;
		case 12: bug_tricks(); break;		
		case 13: functions(); break;
		case 14: functional_decomposition(); break;
		case 15: scope(); break;
		case 16: passing(); break;
		case 17: overload(); break;
		case 18: simple_string(); break;	
		case 19: recursion(); break;		
		case 20: multi_array(); break;
		case 21: dynamic_array(); break;
		case 22: commandline(); break;
		case 23: structure(); break;
		case 24: classes(); break;
		case 25: pointer_array(); break;
		case 26: struct_pointer(); break;
		case 27: object_pointer(); break;

	}
} while (choice!=30); //enter 30 to quit program

	cout << endl << endl;
	cout << "**************************************************************************************************" << endl;
	cout << endl << endl;
	cout << "Thank you for taking the time to grade this project!" << endl << endl;

return 0;
}

void intro()
{	cout << endl << endl << endl;
	cout << "******************************************************************************************" << endl;
	cout << "Welcome to Minh's final project." << endl;
	cout << "There are 27 requirements for this project." << endl;
	cout << "To ease the grading process, Every requirement is in a seperate function." << endl;
	cout << "As the grader, simply enter in the number that corresponds to each requirement" << endl;
	cout << "on the final PDF to see my demonstration of that requirement." << endl;

}

void binary()
{
	cout << "The binary numbering system represents numeric values using two symbols, 1 and 0." << endl;
	cout << "a 2-bit system is represented with 4 possible combinations: 00, 01, 10, 11." << endl;
	cout << "Each of these corresponding to the numbers 0, 1, 2, 3." << endl;
	cout << "the 0's and 1's simply represents if that numbers digits is being added or not." << endl;
	cout << "As you increase in bits, say 3-bit, 4-bit, you get more and more bigger numbers." << endl;
	cout << "2-bit has 4 numberse, 3-bit has 8, 4-bit has 16... etc." << endl;
	cout << "here is an example of a 4-bit number." << endl;

	bitset<4> foo;
	foo.set();
	cout << foo << " as an integer is: " << foo.to_ulong() << endl;
	
	
}

void twos_complement()
{
	cout << "demonstration of twos complement." << endl;
	char bin1[BITS+1] = "00000011";
	cout << "Binary: " << bin1 << endl << "Dec:     " << setw(8) << convert(bin1) << endl << endl;

	char bin2[BITS+1] = "10000000";
cout << "Binary: " << bin2 << endl << "Dec:     " << setw(8) << convert(bin2) << endl << endl;
	
	char bin3[BITS+1] = "01111111";
cout << "Binary: " << bin1 << endl << "Dec:     " << setw(8) << convert(bin3) <<	 endl << endl;
}

int convert(char binary[])
{
	int power = 128;
	int sum = 0;
	assert(strlen(binary) == 8);
	for (int i=0; i < BITS; ++i)
	 {
		if ( i==0 && binary[i]!='0')
		sum = -128;
		else
		sum += (binary[i]-'0')*power;
		power /= 2;
	}
	return sum;
}

void macro()
{	
	int number = INT_MAX;
	cout << "Using int_max to demonstrate a predefined macro." << endl;
	cout << number << endl;

}

void output()
{
	cout << "outputting a simple output!" << endl;
}

void input()
{
	int choice;

	cout << "Demonstrating a simple input. Now enter any integer you'd like: ";
	cin >> choice;
	cout << "you entered: " << choice << endl;
}

void type_cast()
{
	double a;
	int b;
	

	cout << "Showing type casting by converting a double into an int. Enter in a double(decimal) here: ";
	cin >> a;
	b=a;
	cout << "the integer it became is " << b << endl;
}

void conditional()
{
	int choice;
	cout << "demonstrating a conditional. Please enter a number on your keyboard between 1 and 10: ";
	cin >> choice;


	if (choice < 1 || choice > 10)
	cout << "the number " << choice << " is not a number between 1 and 10." << endl;
	else
	cout << "Good job. " << choice << " is a number between 1 and 10." << endl;
}

void logical()
{	
	int x=10;
	int y=25;
	 cout << "Demonstrating logical/bitwise operator ^." << endl;
	x=x^y;
	y=x^y;
	x=x^y;
	cout << "In this function, x=10, y=25, x=x^y, y=x^y, x=x^y, then printing out x yields: " << x << endl;	
}

void loop()
{
	cout << "demonstration of a simple for loop. prints out numbers 1-9." << endl;
	for (int i=1; i < 10; i++)
	cout << i << endl;
}

void random_gen()
{
	srand(time(0));
	cout << "Demonstration of a random number through a random number generator." << endl;
	for (int x=1; x<6; x++)
	cout << 1+(rand()%10) << endl;

}

void dem_error()
{
	cout << "Demonstration of syntax, logic, and run-time error." << endl << endl;
	cout << "A syntax error is an invalid statement written in a way that the language you are working in does not recognize." << endl;
	cout << "A very simple example is simply forgettin the semicolon (;) after an endl statement." << endl << endl;
	cout << "A logic error is an error in which it causes the program to operate incorrectly, but doesn't terminate by itself." << endl;
	cout << "This causes unwanted and unexpected behaviors from the program." << endl;
	cout << "an example of a logic error is forgetting a parenthesis in a math equation. such as a + b / 2.  It should be (a + b) / 2." << endl << endl;
	cout << "A run-time error is an error that occurs during the execution of the program." << endl;
	cout << "A simple example would be when a program runs out of memory, it will cause a run-time error." << endl;

}

void bug_tricks()
{
	int x;
	cout << "Demonstration of a simple debugging trick to make sure that a number entered is indeed an integer." << endl << endl;
	cout << "Enter an integer: ";
	cin >> x;
	while (!cin.good())
	{
		cout << "Not an integer, try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> x;
	}
	cout << "You entered: " << x << endl;
}

void functions()
{
	cout << "This is a function that says HELLO WORLD!" << endl;
}

void functional_decomposition()
{
	cout << "This project is essentially decomposed to making 27 functions, one for each of the requirements, no matter how simple it is, and put them all in a switch menu in main." << endl;

}

void scope()
{
	int choice;
	cout << "In this demonstration of scope, I have declared an int variable called 'choice'." << endl;
	cout << "The variable in main is also called 'choice' when you enter in a number, but the 'choice' that is in this function," << endl;
	cout << "only exists in this function, or scope." << endl;
	cout << "So here, you may enter in an integer that is your 'choice': ";
	cin >> choice;
	cout << "And the number you entered was: " << choice << ", which has no impact on the main menu." << endl;

}

void passing()
{
	int x;
	
	cout << "A simple demonstration on passing by value and passing by reference." << endl;
	cout << "For pass by value, I pass in an integer 20. A simple function will double this value." << endl;
	dub_int(20);	
	cout << endl << endl;
	cout << "For a pass by reference, Please enter in an integer to be passed into, and it will be halved: ";
	cin >> x;
	halved(x);

	
}

void dub_int(int b)
{
	cout << "20 doubled is: " << b*2 << endl;
}

void halved(int &b)
{
	cout << b << " halved is: " << b/2 << endl;
}

void overload()
{	
	int x;
	double y;
	char z;

	cout << "In this demonstration of function overloading, I will call a  function with 3 overloaded types." << endl;
	cout << "Enter in an integer here and the function will double the integer: ";	
	cin >> x;
	dem_overload(x);

	cout << "Enter in a double (decimal number) will make the function triple this number: ";
	cin >> y;
	dem_overload(y);

	cout << "Enter in any single character and the function will print it out: ";
	cin >> z;
	dem_overload(z);
	
}

void dem_overload(int a)
{
	cout << "The integer doubled is : " << a*2 << endl;
}

void dem_overload(double b)
{
	cout << "The doubled (decimal) number tripled is : " << b*3 << endl;
}

void dem_overload(char c)
{
	cout << "The character you entered is: " << c << endl;
}

void simple_string()
{
	string name;
	cout << "A simple demonstration on strings. Please enter your first name  and it will be printed out: ";
	cin >> name;
	cout << name << endl;
}

void recursion()
{
	int choice;
	cout << "Demonstration of recursion by finding the factorial of any integer input." << endl;
	cout << "Enter in any integer to get it's factorial: ";
	cin >> choice;
	cout << factorial(choice) << endl;	

}

int factorial(int x)
{
	if (x==1)
	return 1;
	else
	return x*factorial(x-1);
}

void multi_array()
{
	int x[2][3] = {{0,1,2},{3,4,5}};
	cout << "For this multidimentional array demonstration, I have a 2x3 grid, each grid containing a number." << endl;
	cout << "The first 3 number is 0,1,2. and the 2nd set of 3 numbers is 3,4,5." << endl;
	cout << "To print out the number 0, Simply substitute x[0][0]: " << x[0][0] << endl;
	cout << "To print out the number 1, Simply substitute x[0][1]: " << x[0][1] << endl;
	cout << "To print out the number 2, Simply substitute x[0][2]: " << x[0][2] << endl;
	cout << "To print out the number 3, Simply substitute x[1][0]: " << x[1][0] << endl;
	cout << "To print out the number 4, Simply substitute x[1][1]: " << x[1][1] << endl;
	cout << "To print out the number 5, Simply substitute x[1][2]: " << x[1][2] << endl;
}

void dynamic_array()
{
	cout << "A dynamic array demonstration. Enter in the size of an array of your choice and an array of that size will be created." << endl;
	cout << "I would suggest a small integer for the sake of saving time: ";

	int *array, array_size;
	cin >> array_size;
	array= new int[array_size];

	example_array(array, array_size);	
	delete [] array;
}

void example_array(int number[], int size)
{
	cout << "Now you will be asked to enter in a number for each array." << endl;
	for (int i=1; i <=size; i++)
	{cout << "Enter for #" << i << " :";
	cin >> number[i];}
	
	for (int i=1; i <=size; i++)
	cout << "You entered " << number[i] << " for #" << i << endl;
}

void commandline()
{
	cout << "To demonstrate a commandline, Please exit this program and enter in as many argument as you'd like when you run this project." << endl;
	cout << "You will see that as part of the demonstration, every word you typed will be printed out." << endl;

}

void structure()
{
	cout << "A simple demonstration of using structure to store some data about me." << endl << endl;

	structure_demo Minh =
	{
		"Minh Nguyen",
		25,
		70,
		150
	};
	cout << "Name: " << Minh.name << endl;
	cout << "Age: " << Minh.age << endl;
	cout << "Height in inches: " << Minh.height << " in." << endl;
	cout << "Weight in pounds: " << Minh.weight << " lbs." << endl;
}

void classes()
{	minhsclass minhsobject;
	minhsobject.sentence();
	cout << endl << endl;
	minhsobject.math();
	cout << endl << endl;
}

void pointer_array()
{
	cout << "A demonstration for using a pointer to an array." << endl << endl;
	cout << "Numbers 0-14 will be printed out, then I will use a pointer and add 1 to the array and numbers 1-15 will be printed out." << endl;
	cout << endl << endl;
	int *pointer;
	int i, a[15];
	for (int i = 0; i < 15; i++)
	a[i] = i;
	pointer = a;
	for (int i =0; i < 15; i++)
	cout << pointer[i] << " ";
	for (int i = 0; i < 15; i++)
	pointer[i] = pointer[i] + 1;
	cout << endl << endl;
	for (int i = 0; i < 15; i++)
	cout << a[i] << " ";

	cout << endl << endl;
}

void struct_pointer()
{}

void object_pointer(){}
