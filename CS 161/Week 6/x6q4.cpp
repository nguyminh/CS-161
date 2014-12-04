/*Minh Nguyen
 * Exercise 6, question 4: Tic tac toe with 1-D array
 * input: Asks users to choose numbers on board grid
 * output: fills number with X's and O's. Displays game winner in traditional tic tac toe game
 */


#include <iostream>

using namespace std;

int main()
{
	cout << "WELCOME TO TIC TAC TOE IN C++. Let the games begin! We will start with player 1's move!" << endl << endl << endl << endl << endl;
									
	char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};   //numbers for grid
	int player = 1; 
	int move; //input for choice on grid
	int win=2;	

do	// do-while loop to update gameboard every turn
{
	cout << sq[1] << "   " << sq[2] << "   " << sq[3] << endl; //game board set up
	cout << sq[4] << "   " << sq[5] << "   " << sq[6] << endl;
	cout << sq[7] << "   " << sq[8] << "   " << sq[9] << endl;
	
	cout << endl << endl << endl;
	cout << "player " << player << " Please choose your number: "; // input user choice. 
	cin >> move;	
		
	if(player==1)	// if statement is for player 1, afer each case of possible moves, player is changed to 2.
	{ 
		switch(move) // switch statement requires "move" input and has different cases depending on eaach move.
		{
			case 1: 	//there are a total of 9 cases for each number.
			if(sq[1]=='X'||sq[1]=='O')	//at every case, player = 2, and ends the switch loop, which goes to the else statement.
			{	
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[1] = 'X'; //Player 1's move always changes choice of number to X.
				player = 2;
			}
			break;
		
			case 2:
			if(sq[2]=='X'||sq[2]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[2] = 'X';
				player = 2;
			}
			break;
	
			case 3:
			if(sq[3]=='X'||sq[3]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;;
			}
			else
			{
				sq[3] = 'X';
				player = 2;
			}
			break;
		
			case 4:
			if(sq[4]=='X'||sq[4]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[4] = 'X';
				player = 2;
			}
			break;
	
			case 5:
			if(sq[5]=='X'||sq[5]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[5] = 'X';
				player = 2;
			}
			break;
	
			case 6:
			if(sq[6]=='X'||sq[6]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[6] = 'X';
				player = 2;
			}
			break;
	
			case 7:
			if(sq[7]=='X'||sq[7]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[7] = 'X';
				player = 2;
			}
			break;
	
			case 8:
			if(sq[8]=='X'||sq[8]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[8] = 'X';
				player = 2;
			}
			break;
	
			case 9:
			if(sq[9]=='X'||sq[9]=='O')
			{
				cout << "Invalid choice! try again: "<< endl;
				cin >> move;
			}
			else
			{
				sq[9] = 'X';
				player = 2;
			}
			break;
	
		}
	}

	else  	//else statement is for player 2's move. Same exact switch cases as the if statement for player 1
	{
		switch(move)
		{
			case 1:
			if(sq[1]=='X'||sq[1]=='O')
			{	
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[1] = 'O';    //difference is player 2 marks O's instead of X's.
				player = 1;    //After player 2's move, player = 1 and switch statement breaks to repeat loop.
			}
			break;
		
			case 2:
			if(sq[2]=='X'||sq[2]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[2] = 'O';
				player = 1;
			}
			break;
	
			case 3:
			if(sq[3]=='X'||sq[3]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[3] = 'O';
				player = 1;
			}
			break;
		
			case 4:
			if(sq[4]=='X'||sq[4]=='O')
			{
				cout << "Invalid choice! try again: "<< endl;
				cin >> move;
			}
			else
			{
				sq[4] = 'O';
				player = 1;
			}
			break;
	
			case 5:
			if(sq[5]=='X'||sq[5]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[5] = 'O';
				player = 1;
			}
			break;
	
			case 6:
			if(sq[6]=='X'||sq[6]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[6] = 'O';
				player = 1;
			}
			break;
	
			case 7:
			if(sq[7]=='X'||sq[7]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[7] = 'O';
				player = 1;
			}
			break;
	
			case 8:
			if(sq[8]=='X'||sq[8]=='O')
			{
				cout << "Invalid choice! try again:  " << endl;
				cin >> move;
			}
			else
			{
				sq[8] = 'O';
				player = 1;
			}
			break;
	
			case 9:
			if(sq[9]=='X'||sq[9]=='O')
			{
				cout << "Invalid choice! try again: " << endl;
				cin >> move;
			}
			else
			{
				sq[9] = 'O';
				player = 1;
			}
			break;
	
		}
	}

	//Else-if statement to catch every win possibility. Once a winner is found, win = 1 to exit loop and end game.
	if(sq[1]==sq[2] && sq[2]==sq[3])
		win =1;
	else if(sq[4]==sq[5] && sq[5]==sq[6])
		win = 1;
	else if(sq[7]==sq[8] && sq[8]==sq[9])
		win = 1;
	else if(sq[1]==sq[4] && sq[4]==sq[7])
		win = 1;
	else if(sq[2]==sq[5] && sq[5]==sq[8])
		win = 1;
	else if(sq[3]==sq[6] && sq[6]==sq[9])
		win = 1;
	else if(sq[1]==sq[5] && sq[5]==sq[9])
		win = 1;
	else if(sq[3]==sq[5] && sq[5]==sq[7])
		win = 1;
	else if (sq[1]!='1' && sq[2]!='2' && sq[3]!='3' && sq[4]!='4' && sq[5]!='5' && sq[6]!='6' && sq[7]!='7' && sq[8]!='8' && sq[9]!='9')
		win = 0;	//board has no 3 in a row, and is no longer equal to the board. Then game is draw.
	else
		win = 2;
}
	while (win==2);

	if (win==1)	//When a winner is decided
	{	if (player==1)	//If it's player 1's turn, but the game is over, it means that player 2 won the game
		cout << "GAME OVER!! PLAYER 2 WINS!!!!!" << endl;
		else
		cout << "GAME OVER!! PLAYER 1 WINS!!!!!" << endl; //if it's player 2's turn, but the game is over, it means player 1 won the game
	}
	else
	cout << "Game is a draw!" << endl << endl << endl << endl; 




return 0;
}
