/* Minh D. Nguyen
 * Random number generator
 * outputs 10 random numbers between 1-20
 */

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main ()
{
	int x;	
	srand ( time(0));
	
	for (x = 1; x < 10; x++)
	{ cout << 1+(rand()%20) << endl;
}

return 0;
}

