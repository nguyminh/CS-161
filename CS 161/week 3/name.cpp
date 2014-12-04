/* Minh D. Nguyen
 * Project #3, chapter 9
 * Creating a naming profile program
 * output includes first, last and middle initials
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{

	string first, last, middle, full;

	cout << "Please enter your name starting from first to last. " << endl;
	cout << "include middle name if applicable: ";
	getline(cin,full);

	istringstream iss(full);
	iss >> first;
	iss >> middle;
	iss >> last;

	if (last.empty())	
	cout << "Your name in our record is: " << middle << ", " <<  first  << endl;
	else
	cout << "Your name in our record is : " <<  last << ", " << first << " " << middle.at(0) << ". " <<  endl;
return 0;

}
