/* Minh Nguyen
 * Exercise 4, question 5. Random unique number generator
 * input: no input necessary.
 * output: 4 unique numbers from 1-25.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int random_generator();

int main()
{
	
	int a, b, c, d;
	bool  x=true, y=true, z=true;

	cout << "Welcome to the great raffle of 2014. 4 of the top 25 finalists will randomly be chosen to win a prize \n";
	cout << "Let them games begin!" << endl;

	a = random_generator();	
	cout << "finalist " << a << " is a winner!" << endl;
	while (x==true)
{	b = random_generator();
	if (b!=a)
{	x=false;
	cout << "finalist " << b << " is a winner!" <<  endl;
}	
}
	while (y==true)
{	c = random_generator();
	if ((c!=a)&&(c!=b))
{	y=false;
	cout << "finalist " << c << " is a winner!" << endl;
}
}
	while (z==true)
{	d = random_generator();
	if ((d!=c)&&(d!=b)&&(d!=a))
{	z=false;
	cout << "and lastly, finalist " << d << " is a winner!"  << endl;
}
}
return 0;	

}

int random_generator()
{	int number;
	srand(time(0));
	number = 1+(rand()%25);
	return number;	
}	
