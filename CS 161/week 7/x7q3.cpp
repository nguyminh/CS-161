/*Minh Nguyen
 * Exercise 7, question 3: Grade historgram 
 * Input: User inputs number of students in class. This becomes a dynamic array for how many grades will be submitted. Then user inputs said number of grades, between 0-5 into test_grades function. Which will tally up the scores the user inputs.
 * output: Grades will be tallied, and printed out to see how many students received which scores between 0 and 5.
 */



#include <iostream>
using namespace std;

void test_grades(int score[], int size); // function to count up grades as they are entered.

int main()
{
	int *array_score, class_size;
	
	cout << "*************************************************************************************" << endl;
	cout << "Welcome to the histogram assignment. An easy an effective way to see how many of your students scored what grades!" << endl;


	cout << "Input number of students in your class here: ";
	cin >> 	class_size;
	if (!cin.good())  //validate to make sure it is an integer
	{
		cin.clear();
		cin.ignore(1000,'\n');
		cout << "Not a valid integer, try again: ";
		cin >> class_size;
	}
	cout << "Now you will enter " << class_size << " grades. Must be an integer between 0 and 5." << endl;

	array_score = new int[class_size]; //create dynamic array for function test_grades

	test_grades(array_score, class_size);	


return 0;
}

void test_grades(int score[], int size)
{
	int count0=0, count1=0, count2=0, count3=0, count4=0, count5=0;

	for (int i=1; i <= size; i++) //loop to enter grades, size is equivelent to # of students
	{
		cout << "Enter student #" << i << "'s grade: ";
		cin >> score[i];
		if (!cin.good()) //validate that score inputed is an integer. 
		{	cin.clear();
			cin.ignore(1000, '\n');
			cout << "Not a valid integer. Re-enter student #" << i << "'s grade: ";
			cin >> score[i];
		}
		else if (score[i]>5||score[i]<0)   //validate grade must be between 0-5
	        {	cout << "INVALID. Score must be 0-5. Re-enter student #" << i << "'s grade: ";
			cin >> score[i];
		}
		else if (score[i]==0)   //tally score of 0
		 	count0++;
		
		else if (score[i]==1) //tally score of 1
		 	count1++;
			
		else if (score[i]==2) //tally score of 2
		 	count2++;
		
		else if (score[i]==3) //tally score of 3
		 	count3++;
		
		else if (score[i]==4) //tally score of 4
		 	count4++;
		
		else if (score[i]==5) //tally score of 5
		 	count5++;
		

	}
cout << count0 << " students  got a '0'." << endl;
cout << count1 << " students  got a '1'." << endl;
cout << count2 << " students  got a '2'." << endl;
cout << count3 << " students  got a '3'." << endl;
cout << count4 << " students  got a '4'." << endl;
cout << count5 << " students  got a '5'." << endl;


	

}
