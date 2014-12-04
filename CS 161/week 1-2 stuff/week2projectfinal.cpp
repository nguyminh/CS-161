/*Project 1, the number guessing game
 * Name: Minh Nguyen
 *Date:1/19/2014
 *Description: My first project. a game for 2 players, one choosing a number ,and one guessing the number chosen
 *input: players input including secret number and guessing numbers
 *output:statements telling players how close they were in their guesses and how many remains.
*/

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

  	int main()
{	
	int real, close=100, guess, offby, upperlimit, tries=0, lowerlimit, chances;  
	char answer;
	bool Quit=false; //This allows for the game to start, and will be used for a play again feature.
	upperlimit=20;
	lowerlimit=1;
	while (!Quit) //setting it to !quit will make sure the game starts 1 time no matter what
{{	cout << "Hello and welcome to the number guessing game! " << endl;
	cout << "Let player 1 choose a number for player 2 to guess. " << endl;
	cout << "Player 1, Choose a number between 1 and 20: ";
	cin >> real;
{	if ((real <= 20)&&(real > 0))
{	cout << "Please remember your number Player 1." << endl;
	cout << "Player 2, You have 3 chances to guess players 1 number between 1 and 20" << endl;
	tries=0;
}	else 
{	cout << "Your number is not between 1 and 20 Player 1...try again" << endl; 
	tries=8; //setting tries to 8 here lets me jump to the next loop to prompt player 1 again.
}}	 	
	while (tries>=8) //if number isn't 1-20, keep running this loop til it is in that range
{	cout << "Player 1, Pick a number between 1 and 20. It's really NOT that difficult!: ";
	cin >> real;
	if ((real<=20)&&(real>0))
{	cout << "See that wasn't too tough was it!?" << endl;
	tries=0;
	break;
}
	else
	tries=8;

}
	while (tries <= 2) //loop that is the main part of the game. runs 3 times or til player 2 wins.
{	chances = (2 - tries);
	cout << "Player 2, try guessing Player 1's number. Heres a hint, it's between " << lowerlimit << " and " << upperlimit << ": ";
	cin >> guess;
	cout << "You have " << chances << " guess(es) remaining." << endl;
	
	if (guess < real)
{	cout << "Your previous guess was just a tad TOO LOW, give it another shot!" << endl;
	lowerlimit = ++guess; 
}	else if (guess == real) //if guess is correct, this is chosen to get out of this loop before tries=2
{	tries = 5;
	cout << "CORRECT! You've guessed the right number! YOU WIN like a MILLION dollars!" << endl; 	
} 
	else 
{	cout << "Your previous guess was a little TOO HIGH, try it again!" << endl;
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
	cout << "You're really done playing? I'm pretty sure you don't have anything better to do..." << endl;
	return 0; // return 0 is needed here to leave the game if answer is not y.
}	else
{	upperlimit=20;
	lowerlimit=1;
	tries = 0;
}	

}
}	
return 0;
}

