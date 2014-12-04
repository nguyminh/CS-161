/*Minh Nguyen
 * Exercise 7,Question 4: Tic tac toe game
 * Input: 2 Players choose a number in game grid to play tic tac toe.  The grid is created dynamically by first entering in amount of squares in game grid.
 * Reccomended entering 9 for best results of tic tac toe.
 * output: Numbers will change to X's and O's as playerse enter game.  When 3 in a row is found, game ends and a winner is printed out.
 */


#include <iostream>
using namespace std;

void game_grid(int sq[], int size); //function containing game


int main()
{
	int *board, array_size;  
	cout << "***************************************************************************************" << endl;
	cout << endl << endl << "Welcome to the game of tic tac toe, DYNAMICALLY!" << endl << endl << endl;
	
	cout << "Enter size of tic tac toe game: ";  //creating the game dynamically.  9 is the preferred size of tic tac toe game
	cin >> array_size;
	cout << endl << endl << endl;
	if (!cin.good())
	{	cin.clear();
		cin.ignore(1000, '\n');
		cout << "Not a valid integer. Try again: ";
		cin >> array_size;
	}
	
	board = new int[array_size]; //dynamic array size made

	game_grid(board, array_size); //call game function

	delete [] board; //delete dyanmic array

return 0;
}


void game_grid(int sq[], int size)
{

	int player=1, win=2, move;


	for(int i=1; i <= size; i++)   //loop to fill in squares
	{ 	sq[i] = i;
	}
do
{
	cout << sq[1] << " " << sq[2] << " " << sq[3] << endl; //prints squares out in uniform fashion
	cout << sq[4] << " " << sq[5] << " " << sq[6] << endl;
	cout << sq[7] << " " << sq[8] << " " << sq[9] << endl;

	cout << endl << endl << endl;
	cout << "player " << player << ", please choose a number as a move: "; 
	cin >> move;
	if (player==1)		//if-else statement for each players turn
	{
		switch(move)  //switch with 9 case, for each choice on game board
		{
			case 1:                  // each case will mark in an X or O depending on the player
			if(sq[1]=='X'||sq[1]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[1]='X';
				player=2;
			}
			break;	

			case 2:
			if(sq[2]=='X'||sq[2]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[2]='X';
				player=2;
			}
			break;	

			case 3:
			if(sq[3]=='X'||sq[3]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[3]='X';
				player=2;
			}
			break;	

			case 4:
			if(sq[4]=='X'||sq[4]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[4]='X';
				player=2;
			}
			break;	

			case 5:
			if(sq[5]=='X'||sq[5]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[5]='X';
				player=2;
			}
			break;	

			case 6:
			if(sq[6]=='X'||sq[6]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[6]='X';
				player=2;
			}
			break;	

			case 7:
			if(sq[7]=='X'||sq[7]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[7]='X';
				player=2;
			}
			break;	

			case 8:
			if(sq[8]=='X'||sq[8]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[8]='X';
				player=2;
			}
			break;	

			case 9:
			if(sq[9]=='X'||sq[9]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[1]='X';
				player=2;
			}
			break;	
		}
	}
	

	else
	{
		switch (move)
		{	
			case 1:
			if(sq[1]=='X'||sq[1]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[1]='O';
				player=1;
			}
			break;	

			case 2:
			if(sq[2]=='X'||sq[2]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[2]='O';
				player=1;
			}
			break;	

			case 3:
			if(sq[3]=='X'||sq[3]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[3]='O';
				player=1;
			}
			break;	

			case 4:
			if(sq[4]=='X'||sq[4]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[4]='O';
				player=1;
			}
			break;	

			case 5:
			if(sq[5]=='X'||sq[5]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[5]='O';
				player=1;
			}
			break;	

			case 6:
			if(sq[6]=='X'||sq[6]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[6]='O';
				player=1;
			}
			break;	

			case 7:
			if(sq[7]=='X'||sq[7]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[7]='O';
				player=1;
			}
			break;	

			case 8:
			if(sq[8]=='X'||sq[8]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[8]='O';
				player=1;
			}
			break;	

			case 9:
			if(sq[9]=='X'||sq[9]=='O')
			{     cout << "Invalid move, try again: " << endl;
			      cin >> move;
			}
			else
			{	sq[1]='O';
				player=1;
			}
			break;	
		}
	}
		// list of else-if statements to determine winner. 
	if(sq[1]==sq[2] && sq[2]==sq[3])
		win=1;
	else if (sq[4]==sq[5] && sq[5]==sq[6])
		win=1;
	else if (sq[7]==sq[8] && sq[8]==sq[9])
		win=1;
	else if (sq[4]==sq[1] && sq[4]==sq[7])
		win=1;	
	else if (sq[2]==sq[5] && sq[5]==sq[8])
		win=1;
	else if (sq[3]==sq[6] && sq[6]==sq[9])
		win=1;
	else if (sq[1]==sq[5] && sq[5]==sq[9])
		win=1;
	else if (sq[3]==sq[5] && sq[5]==sq[7])
		win=1;
//	else if (sq[1]!='1' && sq[2]!='2' && sq[3]!='3' && sq[4]!='4' && sq[5]!='5' && sq[6]!='6' && sq[7]!='7' && sq[8]!='8' && sq[9]!='9')
//		win=0;   //For some reason, my game is not printing out X's and O's Instead prints out 88, and 79 respectively
	else 
		win=2;

} 
	while (win==2);
 
	if (win==1)
	{	if (player==1)
		cout << "GAME OVER! PLAYER 2 WINS!" << endl;
		else
		cout << "GAME OVER! PLAYER 1 WINS!" << endl;
	}
	else if (win==0)
	cout << "DRAW GAME!" << endl << endl << endl;


				
}
		

