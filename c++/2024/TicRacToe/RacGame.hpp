#ifndef RACGAME_H
#define RACGAME_H

class RacGame {
    public:
        RacGame() ;
        void displayBoard() ;
        bool update(int xPos , int yPos , char marker) ;
        bool win() ;
        bool tie() ;
} ;

#endif
