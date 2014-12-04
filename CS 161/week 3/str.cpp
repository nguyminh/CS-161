/* Minh D. Nguyen
 * Question 1 of exercise 3
 * couunting string lengths
 * output: number of characters in strings
 */

#include <iostream>
#include <string>
using namespace std;

int main ()
{

	string str;
	cout << "input your string here: ";
	getline(cin,str);
	cout << endl;

	int i;
	for (int i=0; i < str.length(); i++)
{	cout << str.at(i) <<"  " << endl;
}	
	cout << endl;
	for (i =str.length()-1; i>=0; i--)
{	cout << str.at(i) <<"   " << endl;
}	
	cout << endl;
	const int size=str.length();
	cout << "number of characters: " << size << endl;
	cout << endl;
	
	string line;
	cout << "enter a few words here: ";
	getline(cin,line);
	cout << line << endl;

	const int sizes=line.length();
	cout << "number of characters in your sentence: "<< sizes << endl;
	
return 0;

}
