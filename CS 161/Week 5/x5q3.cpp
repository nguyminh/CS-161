/*Minh Nguyen
 * Exercise 5, question 3
 * input 3 random intengers
 * output: pass by reference to set sort those numberse out in order
 */

#include <iostream>
using namespace std;

int sort(int &x, int &y, int &z);

int main()
{	int a, b, c;	

	
	sort(a, b, c);
	
	


return 0;
}


int sort(int &x, int &y, int &z)
{
	int a=x, b=y, c=z, temp, temp2;
	
	cout << "enter 3 digits to be printed out in order: ";
	cin >> a >> b >> c;

	if ((a<b)&&(b<c))
{	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return a, b, c;
}	else if ((a>b)&&(b>c)){
	temp = a;
	a = c;
	c = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return a, b, c;}
	else if ((a<c)&&(c<b)){
	temp = b;
	b = c;
	c = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return a, b, c;}
	else if ((a>b)&&(a<c)){
	temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
	return a, b, c;}
	else if ((a>c)&&(c>b)){
	temp = a;
	a = b;
	temp2 = c;
	c = b;
	b = temp2;
	c = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return a, b, c;
}
}
