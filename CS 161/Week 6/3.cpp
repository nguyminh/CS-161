/*Minh Nguyen
 * Project 3: Phrase guessing game
 * intput: User will input letters into a word.  The word belongs to a phrase.  In my game, Every phrase consists of 4 words that form a meaningful sentence.           After guessing the first word, a second word is to be guessed, so on and so forth til the last.  
 * output: After each letter guess, A list of words will appear and letters will disappear to reflect users guess and if letter is correct, it will replace 
           the underscore that serves as a blank slot for each letter in the word.
 */


#include <iostream>
#include <ctime>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <cstddef>
#include <cstdlib>
#include <algorithm>

using namespace std;

string one(); //The following 4 functions will grab a random word from each function. One is the subject
string two(); // two is verb
string three(); // three is the noun
string four();  //four is an item or thing
void guess_phrase(string &word_one, string &word_two, string &word_three, string &word_four); //Changes words to become blank underscores
bool word_one_of_phrase(string &my_word, string &first_word); //function to guess first word of phrase
bool word_two_of_phrase(string &my_word, string &first_word); //function to guess second word of phrase
bool word_three_of_phrase(string &my_word, string &first_word); // function to guess third word of phrase
bool word_four_of_phrase(string &my_word, string &first_word); // function to guess fourth word of phrase
bool phrase_guess(string &word_1, string &word_2, string &word_3, string &word_4, string &one, string &two, string &three, string &four); //function to attempt guessing entire phrase



int main()
{
	//Declare variables to pass into reference for game functions
	string one_word, two_word, three_word, four_word;
	string  real_word1, real_word2, real_word3, real_word4;
	char ans;
do
{
	one_word = one(); //Sets a reference for the first random word to be used to convert to underscores
	real_word1 = one_word; //Sets a reference for the first random word to be used in guessing portion	

	two_word = two(); //Sets a reference for the 2nd random word to be used to convert to underscores
	real_word2 = two_word;  //Sets a reference for the 2nd  random word to be used in guessing portion

	three_word = three();  //Sets a reference for the 3rd random word to be used to convert to underscores
	real_word3 = three_word;  //Sets a reference for the 3rd random word to be used in guessing portion

	four_word = four();  //Sets a reference for the 4th random word to be used to convert to underscores
	real_word4 = four_word;  //Sets a reference for the 4th random word to be used in guessing portion


	guess_phrase(one_word, two_word, three_word, four_word); //Take the 4 random word references and make them become underscores

	word_one_of_phrase(real_word1, one_word);   // guess first word
	if (real_word1==one_word)
	{		if(phrase_guess(real_word1, real_word2, real_word3, real_word4, one_word, two_word, three_word, four_word)==true) // attempt at phrase guess. if all words correct, game ends
		{	cout << endl << endl << "Would you like to play this game again? Enter y/n: ";
			cin >> ans;
			if (ans=='y'||ans=='Y')
			continue;
			else
			break;		
		}
			word_two_of_phrase(real_word2, two_word); // guess second word if phrase guess failed
			if (real_word2==two_word)
		{		if(phrase_guess(real_word1, real_word2, real_word3, real_word4, one_word, two_word, three_word, four_word)==true) //attempt phrase guess
			{		cout << endl << endl << "Would you like to play this game again? Enter y/n: ";
					cin >> ans;
					if (ans=='y'||ans=='Y')
					continue;
					else
					break;		
			}	
			
				word_three_of_phrase(real_word3, three_word); // guess third word if phrase guess failed
				if (real_word3==three_word)
				{	if(phrase_guess(real_word1, real_word2, real_word3, real_word4, one_word, two_word, three_word, four_word)==true) // attempt phrase guess 
					{	cout << endl << endl << "Would you like to play this game again? Enter y/n: ";
						cin >> ans;
						if (ans=='y'||ans=='Y')
						continue;
						else
						break;		
					}
					word_four_of_phrase(real_word4, four_word); // guess fourth word of phrase guess fail
		}		
		else
	cout << "You ran out of guesses. The secret phrase is : " << real_word1 << " " << real_word2 << " " << real_word3 << " " << real_word4 << endl;	
		}
		else
	     cout << "You ran out of guesses. The secret phrase is : " << real_word1 << " " << real_word2 << " " << real_word3 << " " << real_word4 << endl;	
	
	
	}		
	else
	cout << "You ran out of guesses. The secret phrase is : " << real_word1 << " " << real_word2 << " " << real_word3 << " " << real_word4 << endl;

	cout << "Would you like to play this game again? Enter y/n: ";
	cin >> ans;
}
while((ans=='y')||(ans=='Y'));


return 0;
}

bool phrase_guess(string &word_1,string & word_2,string & word_3,string &word_4, string &one, string &two, string &three, string &four)
{
	char ans;	
	string guess_one, guess_two, guess_three, guess_four;

	
	cout << endl;
	cout << "would you like to guess the entire phrase? enter y/n: ";
	cin >> ans;
	if (ans=='y'||ans=='Y')
	{	
		cout << "Here is the phrase thus far: " << endl;
		cout << one << " " << two << " " << three << " " << four << endl;
		cout << "Enter in your phrase guess: " << endl;
		cout << "Use a space or press enter after each word you guess." << endl;
		cout << "Any word you guess right will be displayed. " << endl << endl;
		cin >> guess_one >> guess_two >> guess_three >> guess_four;
		cout << "The words you guessed correctly are: ";
		if (guess_one==word_1 || guess_one==word_2 || guess_one==word_3 || guess_one==word_4)
		{	cout << guess_one << " ";
		
		}
		else 
		return false;
		if (guess_two==word_1 || guess_two==word_2 || guess_two==word_3 || guess_two==word_4)
		{	cout << guess_two << " ";
		}
		else
		return false;
		if (guess_three==word_1 || guess_three==word_2 || guess_three==word_3 || guess_three==word_4)
		{	cout << guess_three << " ";
		}
		else
		return false;
		if (guess_four==word_1 || guess_four==word_2 || guess_four==word_3 || guess_four==word_4)
		{	cout << guess_four << " " << endl;
		}
		else
		return false;
		if((guess_one==word_1 || guess_one==word_2 || guess_one==word_3 || guess_one==word_4) && (guess_two==word_1 || guess_two==word_2 || guess_two==word_3 || guess_two==word_4) && (guess_three==word_1 || guess_three==word_2 ||guess_three==word_3 || guess_three==word_4) && (guess_four==word_1 || guess_four==word_2 || guess_four==word_3 || guess_four==word_4))
		
	{	cout << "YOU'VE GUESSED THE PHRASE CORRECTLY!! WINNER! WINNER! WINNER!" << endl;
		cout << " The phrase is: " << word_1 << " " << word_2 << " " << word_3 << " " << word_4 << " ";
		return true;
	}
	}
	else
	return false;
}




string one()
{	
	srand(time(0));
	string first;
	
	const string random_subject[10]={"hippos", "monkeys", "ninjas", "samurais", "toads", "zebras", "bats", "iguanas", "velociraptors", "babies"};
	
	cout << endl << endl;
	cout << "**************************************************************************************************************" << endl;
	cout << "Welcome to the Phrase guessing game.  The computer will produce 4 words that will produce a sensible phrase. " << endl;
	cout << "The word only accepts lower case, so inputting in an uppercase letter will cost you a guess! " << endl;
	cout << endl << endl << "You will have a certain amount of guesses per word depending on word length. Once you run out of guesses" << endl;
	cout << "for that word, the game will end. " << endl << endl;
	cout << "Let the games begin!" << endl << endl;
	cout << "(The phrase will be displayed for instructor to enter correct words to test out game)" << endl << endl;
	cout << "The phrase is: ";
	first = random_subject[rand()%10];
	cout << first << " ";	
	return first;
}

string two()
{	
	srand (time(0));
	string second;
	
	const string random_verb[10]={"killed", "desecrated", "cooked", "choked", "touched", "sidekicked", "attacked", "felt", "punched", "burned"};

	
	second = random_verb[rand()%10];
	cout << second << " ";	
	return second;
}

string three()
{	
	srand (time(0));
	string third;
	
	const string random_noun[10]={"josephs", "sharons", "robs", "johns", "marys", "jacks", "luthers", "obamas", "peters", "lynns"};

	third = random_noun[rand()%10];
	cout << third << " ";	
	return third;
}

string four()
{
	srand (time(0));
	string fourth;
	
	const string random_thing[10]={"home", "armpit", "chair", "hair", "head", "computer", "television", "banana", "car", "bike"};

	fourth = random_thing[rand()%10];
	cout << fourth << " " << endl;
	return fourth;
}



void guess_phrase(string &word_one, string &word_two, string &word_three, string &word_four)
{
	cout << endl << endl;
	cout << "Here is your phrase of words to guess! " << endl;
	cout << " '";	
	for (int i=0; i < word_one.length(); i++)
	{	
		word_one[i] = '_';
		cout << word_one[i] << " "; 
	}
	cout << "     ";
	
	for (int i=0; i < word_two.length(); i++)
	{	
		word_two[i] = '_';
		cout << word_two[i] << " "; 
	}
	cout << "     ";

	for (int i=0; i < word_three.length(); i++)
	{	
		word_three[i] = '_';
		cout << word_three[i] << " "; 
	}
	cout << "     ";
	
	for (int i=0; i < word_four.length(); i++)
	{	
		word_four[i] = '_';
		cout << word_four[i] << " "; 
	}
	cout << "' " << endl << endl;

}

bool word_one_of_phrase(string &my_word, string &first_word)
{	
	
	cout << endl << endl;
	string final, temp;
	int loop_1;
	char my_letter, ans;
	string all_letters("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	const int size = first_word.length();
	loop_1 = (size + 2);

	cout << "YOU WILL NOW BE GUESSING THE FIRST WORD OF THE PHRASE!" << endl << endl << endl;	


	while (loop_1 != 0)	
{	replace(all_letters.begin(), all_letters.end(), my_letter, '_');
	cout << endl << endl << endl;
	cout << "you have " << loop_1 << " guesses to guess this word.." << endl << endl;
	cout << "Your word is: " << first_word << endl;

	{	if (loop_1 < (size + 2))
		{ cout << "Would you like to guess the word now? (y/n): ";
		   cin >> ans; 
			if ((ans=='Y')||(ans=='y'))
				{ cout << endl << endl;
			          cout << "Enter your guess for the word here: ";
			          cin >> final;
					 if (final==my_word)
					{	final=temp;
						temp=first_word;
						first_word=my_word;
						cout << "CORRECT!" << endl;
						  break;
					}
					else 
					cout << "Nope, thats not it. keep guessing letters." << endl << endl << endl;
				}
		 } 
	}
	cout << endl << endl << endl;
	cout << "availble letters to choose from: ";
	cout <<  all_letters << endl << endl << endl;
	cout << "Enter a letter from the list above: ";
	cin >> my_letter;

	
	for (int i = 0; i < my_word.length(); i++)
	{	if (my_word[i]==my_letter)
		{	first_word[i]=my_letter;
		
		}
	}	


	if (my_word==first_word)
 	 {	cout << endl << endl << endl;
		cout <<"The word is: " <<  my_word << endl;
		cout << "Correct! Onto the next word!" << endl << endl;
		return true;
		break;	
	 }	
	loop_1 = (loop_1 - 1);	
}
	if ((first_word!=my_word)&&(final!=my_word))
	{	cout << "GAME OVER!!!!!!!!" << endl;
		cout << "sorry the word you were looking for is: " << my_word << endl;
		return false;
	}

}


bool word_two_of_phrase(string &my_word, string &first_word)
{	

	cout << endl << endl;
	string final, temp;
	int loop_1;
	char my_letter, ans;
	string all_letters("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	const int size = first_word.length();
	loop_1 = (size + 2);

	cout << "YOU WILL NOW BE GUESSING THE SECOND WORD OF THE PHRASE!" << endl << endl << endl;

	while (loop_1 != 0)	
{	replace(all_letters.begin(), all_letters.end(), my_letter, '_');
	cout << endl << endl << endl;
	cout << "you have " << loop_1 << " chances to guess this word.." << endl << endl;
	cout << "Your word is: " << first_word << endl;

	{	if (loop_1 < (size + 2))
		{ cout << "Would you like to guess the word now? (y/n): ";
		   cin >> ans; 
			if ((ans=='Y')||(ans=='y'))
				{ cout << endl << endl;
			          cout << "Enter your guess for the word here: ";
			          cin >> final;
					 if (final==my_word)
					{	final=temp;
						temp=first_word;
						first_word=my_word;
						cout << "CORRECT!" << endl;
						  break;
					}
					else 
					cout << "Nope, thats not it. keep guessing letters." << endl << endl << endl;
				}
		 } 
	}
	cout << endl << endl << endl;
	cout << "availble letters to choose from: ";
	cout <<  all_letters << endl << endl << endl;
	cout << "Enter a letter from the list above: ";
	cin >> my_letter;

	
	for (int i = 0; i < my_word.length(); i++)
	{	if (my_word[i]==my_letter)
		{	first_word[i]=my_letter;
		
		}
	}	


	if (my_word==first_word)
 	 {	cout << endl << endl << endl;
		cout <<"The word is: " <<  my_word << endl;
		cout << "Correct! Onto the next word!" << endl << endl;
		break;
	 }	
	loop_1 = (loop_1 - 1);	
}
	if ((first_word!=my_word)&&(final!=my_word))
	{	cout << "GAME OVER!!!!!!!!" << endl;
		cout << "sorry the word you were looking for is: " << my_word << endl;
	}

}


bool word_three_of_phrase(string &my_word, string &first_word)
{	

	cout << endl << endl;
	string final, temp;
	int loop_1;
	char my_letter, ans;
	string all_letters("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	const int size = first_word.length();
	loop_1 = (size + 2);

	cout << "YOU WILL NOW BE GUESSING THE THIRD WORD OF THE PHRASE!" << endl << endl << endl;

	while (loop_1 != 0)	
{	replace(all_letters.begin(), all_letters.end(), my_letter, '_');
	cout << endl << endl << endl;
	cout << "you have " << loop_1 << " chances to guess this word.." << endl << endl;
	cout << "Your word is: " << first_word << endl;

	{	if (loop_1 < (size + 2))
		{ cout << "Would you like to guess the word now? (y/n): ";
		   cin >> ans; 
			if ((ans=='Y')||(ans=='y'))
				{ cout << endl << endl;
			          cout << "Enter your guess for the word here: ";
			          cin >> final;
					 if (final==my_word)
					{	final=temp;
						temp=first_word;
						first_word=my_word;
						cout << endl << "Onto the next word! " << endl << endl << endl;
						  break;
					}
					else 
					cout << "Nope, thats not it. keep guessing letters." << endl << endl << endl;
				}
		 } 
	}
	cout << endl << endl << endl;
	cout << "availble letters to choose from: ";
	cout <<  all_letters << endl << endl << endl;
	cout << "Enter a letter from the list above: ";
	cin >> my_letter;

	
	for (int i = 0; i < my_word.length(); i++)
	{	if (my_word[i]==my_letter)
		{	first_word[i]=my_letter;
		
		}
	}	


	if (my_word==first_word)
 	 {	cout << endl << endl << endl;
		cout <<"The word is: " <<  my_word << endl;
		cout << "Correct! Onto the next word!" << endl << endl;
		break;
	 }	
	loop_1 = (loop_1 - 1);	
}
	if ((first_word!=my_word)&&(final!=my_word))
	{	cout << "GAME OVER!!!!!!!!" << endl;
		cout << "sorry the word you were looking for is: " << my_word << endl;
	}

}


bool word_four_of_phrase(string &my_word, string &first_word)
{	

	cout << endl << endl;
	string final, temp;
	int loop_1;
	char my_letter, ans;
	string all_letters("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	const int size = first_word.length();
	loop_1 = (size + 2);

	cout << "YOU WILL NOW BE GUESSING THE FOURTH WORD OF THE PHRASE!" << endl << endl << endl;

	while (loop_1 != 0)	
{	replace(all_letters.begin(), all_letters.end(), my_letter, '_');
	cout << endl << endl << endl;
	cout << "you have " << loop_1 << " chances to guess this word.." << endl << endl;
	cout << "Your word is: " << first_word << endl;

	{	if (loop_1 < (size + 2))
		{ cout << "Would you like to guess the word now? (y/n): ";
		   cin >> ans; 
			if ((ans=='Y')||(ans=='y'))
				{ cout << endl << endl;
			          cout << "Enter your guess for the word here: ";
			          cin >> final;
					 if (final==my_word)
					{	final=temp;
						temp=first_word;
						first_word=my_word;
						cout << endl << "CORRECT!" << endl;
						cout << "YOU'VE WON THE GAME!" << endl;	
						  break;
					}
					else 
					cout << "Nope, thats not it. keep guessing letters." << endl << endl << endl;
				}
		 } 
	}
	cout << endl << endl << endl;
	cout << "availble letters to choose from: ";
	cout <<  all_letters << endl << endl << endl;
	cout << "Enter a letter from the list above: ";
	cin >> my_letter;

	
	for (int i = 0; i < my_word.length(); i++)
	{	if (my_word[i]==my_letter)
		{	first_word[i]=my_letter;
		
		}
	}	


	if (my_word==first_word)
 	 {	cout << endl << endl << endl;
		cout <<"The word is: " <<  my_word << endl;
		break;
	 }	
	loop_1 = (loop_1 - 1);	
}
	if ((first_word!=my_word)&&(final!=my_word))
	{	cout << "GAME OVER!!!!!!!!" << endl;
		cout << "sorry the word you were looking for is: " << my_word << endl;
	}

}
