#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

  	int main()
{	
	int real, newGame, close=100, guess, offby, upperlimit, tries, lowerlimit, chances;  
	char answer;
	bool Quit=false; //This allows for the game to start, and will be used for a play again feature.
	upperlimit=20;
	lowerlimit=1;
	while (!Quit) //setting it to !quit will make sure the game starts 1 time no matter what
{{	cout << "Hello and welcome to the number guessing game!" << endl;
	cout << "Player 1, Choose a number between 1 and 20: ";
	cin >> real;

	if ((real <= 20)&&(real > 0))
{	cout << "Please remember your number Player 1." << endl;
	cout << "Player 2, You have 3 chances to guess players 1 number between 1 and 20" << endl;
	tries=0;
	break;
}	else 
{ 	cout << "Your number is not between 1 and 20 Player 1...try again" << endl; 
	tries=8; //setting tries to 8 here lets me jump to the next loop to prompt player 1 again.
}	 	
}
	while (tries=8) //if number isn't 1-20, keep running this loop til it is in that range
{{	cout << "Player 1, choose number between 1 and 20: ";
	cin >> real;
}
	if ((real<=20)&&(real>0))
{	tries=0;
	break;
}
	else
{ 	tries=8;
}
}

	while (tries <= 2) //loop that is the main part of the game. runs 3 times or til player 2 wins.
{	chances = (2 - tries);
	cout << "Player 2, guess a number between " << lowerlimit << " and " << upperlimit << ": ";
	cin >> guess;
	cout << "You have " << chances << " guess(es) remaining" << endl;
	
	if (guess < real)
{	cout << "too low." << endl;
	lowerlimit = ++guess; 
}	else if (guess == real) //if guess is correct, this is chosen to get out of this loop before tries=2
{	tries = 5;
	cout << "you win" << endl; 	
} 
	else 
{	cout << "too high." << endl;
	upperlimit = --guess;
}

	tries =( tries + 1);

	if (real < guess) //this finds the number guessed that was closest to real number
	offby = (++guess - real);
	else
	offby = (real - --guess);
	if (offby < close)	
	close = offby;
}

	while (tries <= 5) //this loop is for when you lose. 
{
	cout << "You ran out of guesses. The secret number is " << real << "," << endl; 
	cout << "and your closest guess was off by " << close << "." << endl;
	break;
}
	cout << "play again? y/n: ";
	cin >> answer;
	if (answer!='y') //if answer is anything other than y, quit becomes false, which negates the very first while
{	Quit=false;
	cout << "Have a good day!" << endl;
	return 0; // return 0 is needed here to leave the game if answer is not y.
}	else
	tries = 0;
	
}
}
	
return 0;
}
