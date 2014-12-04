/* Minh Nguyen
 * Exercise 4, question 2. Comparing 2 strings for similarity
 * input: 2 strings, could be the same or not
 * output: whether the 2 strings contain the same character
 */

#include <iostream>
#include <string>



using namespace std;
using std::string;



string str1();
string str2();
bool  content(string &first, string &second);

int main()
{
	string strA;
	string strB;
	cout << "this is a program to compare 2 strings!" << endl;
	
	
	strA = str1();
	strB = str2();
	
	content(strA, strB);
	
return 0;
}

string str1()
{ 
	string str1;
	cout << "enter string 1: " << endl;
	getline(cin,str1);

	return str1;
}

string str2()
{
	string str2;
	cout << "enter string 2: " << endl;
	getline(cin,str2);
	
	return str2;
}

	bool content(string &first, string &second)
{
	string strA=first; 
	string strB=second;
	if (strA==strB)
	cout << "these strings are the same." << endl;
	else
	cout << "the strings are not the same." << endl;

	return true;
}
