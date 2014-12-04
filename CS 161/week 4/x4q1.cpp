/*Random number generator exercise 4 question 1
 *inputs:2 integers for minimum and max number
 *output: generates a random number between ranges
 *Minh Nguyen
 */

#include <iostream>
#include <cstdlib>


using namespace std;
int low();
int big();
int rand_int(int &min, int &max);

int main ()
{	int min, max, count=1, number;
		
	min = low();
	max = big();
	
	rand_int(min, max);
	
return 0;

}
	int low()
{	int low;
	cout << "enter a minimum number here: " << endl;
	cin >> low;

        return low;     

}

	int big()
{	int big;
	cout << "enter a maximum number here: " << endl;
	cin >> big;

	return big;
}
	
	int rand_int(int &min, int &max)
{
	int count=1, number;
	while (count==1)
{	number = rand()%(max-min)+min;
	cout << number << endl;
	break;
}
}
