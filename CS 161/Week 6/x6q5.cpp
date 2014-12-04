/*Minh Nguyen
 * Exercise 6, question 5. Tic tac toe game with 2D array
 * input: 2 users choose a number on a 2d Grid from 1-9. representing a tic tac toe board. Game ends when 3 x's or 3's are read in a row
 * output: changes numbers on 2d Game grid to become X's and O's depending on which players turn
 */



#include <iostream>

using namespace std;

int main()
{

   int board[2][5] = {{0,1,2,3,4}, {5,6,7,8,9}};    //game board grid
   int sq[10] = {0,1,2,3,4,5,6,7,8,9};  //checks for repeat
   int spot, moves = 9, win = -1;

   for (int i = 0; i < 1; i++)    //The following loops creates the game board.     
   {
       for (int x = 1; x < 4; x++)
     {
       cout << board[i][x] << " ";
     }
   }
   cout << endl << endl;
       for (int i = 0; i < 1; i++)
   {
       for (int x = 4; x < 5; x++)
     {
       cout << board[i][x] << " ";
     }
   }
   for (int i = 1; i < 2; i++)
   {
       for (int x = 0; x < 2; x++)
     {
       cout << board[i][x] << " ";
     }
   }
   cout << endl << endl;
       for (int i = 1; i < 2; i++)
   {
       for (int x = 2; x <= 4; x++)
     {
       cout << board[i][x] << " ";  //Game board making loops ends here.
     }
   }
   cout << endl;

   cout << "Player 1 Starts first as X. Player 2 goes 2nd as O. ";

   while (moves > 0)               // while loop to keep game being played.                   
   {
       int bad = 0;
       while (bad == 0)  //loop to check for invalid moves.
       {
       cout << "Please enter a number on the grid: " << endl;
       cin >> spot;

           if (cin.fail())                             
           {
               cin.clear();
               cin.ignore();
               cout << "Invalid entry! " << endl;
               bad = 0;
           }
           else if (sq[spot] == -3)      
           {
               cout << "Invalid entry! " << endl;
               bad = 0;
           }
           else
           {
           bad = 1;
           }
           sq[spot] = -3;     
       }

   for (int i = 0; i < 1; i++) //the following for loops are for different guesses of the games. this one is for numbers 123
   {
       for (int x = 1; x < 4; x++)
     {
       if (board[i][x] == spot && win == -1 || board[i][x] == -1)
       {
           board[i][x] = -1;
           cout << "X" << " ";
       }
       else if (board[i][x] == spot && win == -2 || board[i][x] == -2)
       {
          	board[i][x] = -2;
           cout << "O" << " ";
       }
       else
       {
           cout << board[i][x] << " ";
       }

     }
   }
   cout << endl << endl;
   for (int i = 0; i < 1; i++) // this one for 4
   {
       for (int x = 4; x < 5; x++)
     {
       if (board[i][x] == spot && win == -1 || board[i][x] == -1)
       {
           board[i][x] = -1;
           cout << "X" << " ";
       }
       else if (board[i][x] == spot && win == -2 || board[i][x] == -2)
       {
           board[i][x] = -2;
           cout << "O" << " ";
       }
       else
       {
           cout << board[i][x] << " ";
       }

     }
   }
   for (int i = 1; i < 2; i++) //this one for 5 and 76
   {
       for (int x = 0; x < 2; x++)
     {
       if (board[i][x] == spot && win == -1 || board[i][x] == -1)
       {
           board[i][x] = -1;
           cout << "X" << " ";
       }
       else if (board[i][x] == spot && win == -2 || board[i][x] == -2)
       {
           board[i][x] = -2;
           cout << "O" << " ";
       }
       else
       {
           cout << board[i][x] << " ";
       }
     }
   }
   cout << endl << endl;
   for (int i = 1; i < 2; i++) // this one for 7, 8 and 9.
   {
       for (int x = 2; x <= 4; x++)
     {
       if (board[i][x] == spot && win == -1 || board[i][x] == -1)
       {
           board[i][x] = -1;
           cout << "X" << " ";
       }
       else if (board[i][x] == spot && win == -2 || board[i][x] == -2)
       {
           board[i][x] = -2;
           cout << "O" << " ";
       }
       else
       {
           cout << board[i][x] << " ";
       }

     }
   }
   moves--;
   cout << endl;

   if (win == -1) //check for winners here and to end the game by getting out of the while loop.
	 win = -2;              
   else
	 win = -1;

   }

   return 0;
}
