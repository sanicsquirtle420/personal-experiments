#include <iostream>
#include "RacGame.h"

using namespace std ;

int main(void){
    RacGame game ;
    char player = 'X' ;
    int x , y ;

    cout << "Welcome to Tic-Rac-Toe!" << endl ;
    game.displayBoard() ;

    while(true) {
        cout << "Player " << player << ", enter your x position (1-3) " ;
        cin >> x ;
        cout << "Player " << player << ", enter your y position (1-3) " ;
        cin >> y ;

        if(game.update(x , y , player)) {
            game.displayBoard() ;

            if(game.win()) {
            cout << "Player " << player << " wins!" << endl ;
            break ;
        }

            if(game.tie()) {
                cout << "It's a tie!" << endl ;
                break ;
            }

            // switches player character
            player = (player == 'X') ? 'O' : 'X' ;
        }

        else {
            cout << "Invalid position! Try again." << endl ;
        }
    }

    return 0 ;
