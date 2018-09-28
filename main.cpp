#include <string>
#include "TicTacToe Class.h"

int main()
{
    string answer;
    TicTacToe gameOne, gameTwo;
    int pickOne = 0;
    
    do
    {
        
        gameOne.clearBoard();				// clears the board
		
        for (int moveCounter = 0;  moveCounter < 9; moveCounter++)        //Nine possible moves
        {
            
            gameOne.printBoard();           //Lets user identify potential spaces
            cout << endl;
            cin >> pickOne;
            
            if (pickOne == 2)
            {
                gameOne.putMark(0,0);
            }
            
            else if(pickOne == 3)
            {
                gameOne.putMark(0,1);
            }
            
            else if(pickOne == 4)
            {
                gameOne.putMark(0,2);
            }
            
            else if(pickOne == 5)
            {
                gameOne.putMark(1,0);
            }

            else if(pickOne == 6)
            {
                gameOne.putMark(1,1);
            }
            
            else if(pickOne == 7)
            {
                gameOne.putMark(1,2);
            }

            else if(pickOne == 8)
            {
                gameOne.putMark(2,0);
            }
            
            else if(pickOne == 9)
            {
                gameOne.putMark(2,1);
            }
            
            else if(pickOne == 10)
            {
                gameOne.putMark(2,2);
            }

            cout << endl << "Use original tile numbers" << endl;
            
        }

        
        int winner = gameOne.tellWinner(); // print the winner
        
        if (winner != 0)
        {
            cout << endl << (winner == 1 ? 'X' : '0') << " wins" << endl;
        }
        else
        {
            cout << endl << "Tie" << endl;
        }
        
        gameOne.tellWinner();
        cout << "Play another game?" << endl;
        cin >> answer;

        
    }   while(answer == "yes" || answer == "Yes");
    
    
    return 0;
}
