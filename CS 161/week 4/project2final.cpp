/* Minh Nguyen
 * Project 2: word guessing game
 * input: input in a secret word, as well as attempts at letters of word. always have +2 attempts relative to word size.
 * output: display of words to choose from, as well as correct words filling in blank lines 
 */

#include <iostream>
#include <string>
#include <cstddef>
#include <cstring>
#include <algorithm>
#include <cstdlib>


using namespace std;
string get_word();


int main ()
{	
	string secret_word, my_word, final;
	char guess, ans, my_letter;
	int loop_1, i; 
	string all_letters("a b c d e f g h i j k l m n o p q r s t u v w x y z");	
	
	cout << "WELCOME TO THE WORD GUESSING GAME. LET THE GAMES BEGIN!" << endl << endl << endl << endl;

do {	secret_word = get_word();			
	my_word = secret_word;
	for(int i = 0; i < my_word.length(); i++)
{	my_word[i]='_';
	cout << my_word[i] << " ";	
}
	const int size = secret_word.length();
	loop_1 = (size + 2);

	cout << endl << endl;	
	while (loop_1 != 0)	
{	replace(all_letters.begin(), all_letters.end(), my_letter, '_');
	cout << "you have " << loop_1 << " guesses left." << endl << endl;
	cout << "Your word is: " << my_word << endl;

	{	if (loop_1 < (size + 2))
		{ cout << "Would you like to guess the word now? (y/n): ";
		   cin >> ans; 
			if ((ans=='Y')||(ans=='y'))
				{ cout << "Enter your guess for the word here: ";
			          cin >> final;
					 if (final==secret_word)
						{cout << "CORRECT! YOU'RE A WINNER!!" << endl;
						  break;}
					else 
					cout << "Nope, thats not it. keep guessing letters." << endl; } } } 

	cout << "availble letters to choose from: ";
	cout <<  all_letters << endl;
	cout << "Enter a letter from the list above: ";
	cin >> my_letter;

	
	for (int i = 0; i < secret_word.length(); i++)
{	if (secret_word[i]==my_letter)
	{	my_word[i]=my_letter;
		
}
}	if (my_word==secret_word)
{	cout <<"The word is: " <<  my_word << endl;
	cout << "CONGRATULATIONS! YOU'VE WON!!" << endl;
	break;
 }	
	loop_1 = (loop_1 - 1);	
}
	if ((my_word!=secret_word)&&(final!=secret_word))
{		cout << "GAME OVER!!!!!!!!" << endl;
		cout << "sorry the word you were looking for is: " << secret_word << endl;
						
}	cout << "Would you like to play again? (y/n): ";
	cin >> ans;
}	while((ans=='y')||(ans=='Y'));
		cout << "Alright then, GOOD BYE!" << endl;
return 0;
}

string get_word()
{	
	string secret;
	
	cout << "Player 1: Please enter a secret word. The word may not contain special characters or spaces!: "; 
	cin >> secret;
	
	
	size_t found = secret.find_first_not_of("abcdefghijklmnopqrstuvwxyz");
	while (found!=string::npos)
{	cout << "The secret word you entered contains special character." << endl;
	cout << "Please try another secret word, it  must contain no special characters!:  ";
	cin >> secret;
	found = secret.find_first_not_of("abcdefghijklmnopqrstuvwxyz");	
}
	
	return secret;
}

 
