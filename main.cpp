//
//  main.cpp
//  TicTacToe
//
//  Created by Rose Kinder on 2/28/21.
//

#include <iostream>
using namespace std;
int main()
{
    char ttt[3][3];

    //initialize the board
    for (int row = 0;row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            ttt[row][col] = '?';
            cout << ttt[row][col];
        }
        cout << endl;
    }
    
    int row=0;
    int col=0;
    
    for(int count=0;count<5;count++)
    {
        cout << "Please enter a row and column where you would like to put X." << endl;
        cin >> row;
        cin >> col;
        ttt[row][col] = 'X';
        
        
        //Display new board
        for (int row = 0;row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cout << ttt[row][col];
            }
            cout << endl;
        }
        
        if (count < 4)
        {
            cout << "Please enter a row and column where you would to put O." << endl;
            cin >> row;
            cin >> col;
            ttt[row][col] = 'O';
            
            //Display new board
            for (int row = 0;row < 3; row++)
            {
                for (int col = 0; col < 3; col++)
                {
                    cout << ttt[row][col];
                }
                cout << endl;
            }
        }
    }
    
    
    return 0;
}
