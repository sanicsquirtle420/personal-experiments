#include <iostream>
#include "RacGame.h"

using namespace std ;

char board[3][3] = {{'a' , 'b' , 'c'} , {'d' ,'e' , 'f'} , {'g' , 'h' , 'i'}} ;

RacGame :: RacGame() {
    
}

void RacGame :: displayBoard() {
    cout << endl ;

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cout << board[i][j] << " " ;
        }
        cout << endl ;
    }
    cout << endl ;
}

bool RacGame :: update(int xPos , int yPos , char marker) {
    int row = xPos - 1 ;
    int col = yPos - 1 ;

    if(board[row][col] != 'X' && board[row][col] != 'O'){
        board[row][col] = marker ;
        return true ;
    }
    else {
        return false ;
    }
}

bool RacGame :: win() {
    for(int i = 0 ; i < 3 ; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            // checking rows
            return true ;
        }
        else if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            // checking columns 
            return true ;
        }
    }

    // checking diagnoals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true ;
    }
    else if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true ;
    }

    return false ;
}

bool RacGame :: tie() {
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 0 ; j++) {
            if(board[i][j] != 'X' || board[i][j] != 'O') {
                cout << "Checking..." << endl ;
                // checking for empty space
                return true ;
            }
        }
    }

    return false ; // all spots are full
}