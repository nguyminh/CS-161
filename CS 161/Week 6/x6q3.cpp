/*Minh Nguyen
 * Exercise 6, question 3
 * input: An array of students scores from a test
 * output: Shows how many students received what grades from 0-5
 */

#include <iostream>

using namespace std;

int main ()
{	

	//delare variables.  	
	int grades[100];
	int count0=0;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	int count5=0;
	
	cout << "HELLO, welcome to the program that takes your grade inputs for your students, and shows how many students received that grade from 0-5. " << endl;	

	
	cout << "Enter your students grades here, an integer from 0-5.  When finish, type -1" << endl;	
	for (int j=0; j <= grades[100]; j++)
	{
		cout << "Enter grade for student: " << (j+1) << ": ";
		cin >> grades[j];
		if (grades[j] == -1 )	//To end loop when no more scores need imputting
		break;
		else if ((grades[j]>5)||(grades[j]<0)) //Integer validator to make sure its between 0-5
		{	cout << "not a number try again: ";		
			cin >> grades[j];		
		}
		else if (grades[j]==0)//if grade is 0, add 1 to the counts of students with 0 grades.
		{count0++;
		continue;}
		else if(grades[j]==1)//similar to 0, but for grade 1
		{count1++;
		continue;}
		else if (grades[j]==2)//similar to 0, but for grade 2
		{count2++;
		continue;}
		else if (grades[j]==3)// similar to 0, but for grade 3
		{count3++;
		continue;}
		else if (grades[j]==4)// similar to 0, but for grade 4
		{count4++;
		continue;}
		else if (grades[j]==5)// similar to 0, but for grade 5
		{count5++;
		continue;}
	}
	
	//print out results of number of students receiving what grades
	cout << count0 << " Students received a grade of 0. " << endl;
	cout << count1 << " Students received a grade of 1. " << endl;
	cout << count2 << " Students received a grade of 2. " << endl;
	cout << count3 << " Students received a grade of 3. " << endl;
	cout << count4 << " Students received a grade of 4. " << endl;
	cout << count5 << " Students received a grade of 5. " << endl;		 

return 0;
}
