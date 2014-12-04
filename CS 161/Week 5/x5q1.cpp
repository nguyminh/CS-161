/*Random number generator exercise 5 question 1
 *  *inputs:2 integers for minimum and max number
 *   *output: generates a random number between ranges, and sets the third value to be that generated random number. 
 *    *Minh Nguyen
 *     */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int low();
int big();
int rand_int(int min, int max, int &val);

int main ()
{	int min, max, count=1, number, val;
		
	min = low();
	max = big();
	number = rand_int(min, max, val);		
	
	cout << "the random generated number is: " << number << endl;
	

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
	
	int rand_int(int min, int max, int &val)
{
	
	srand(time(0));
	val = rand()%(max-min)+min;
	return val;
		
}


