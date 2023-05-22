#include <iostream>
#include <vector>

#include "constants.h"

#ifndef PIECES_H
#define PIECES_H

class Piece {
public:
    virtual ~Piece() = 0;
    
    virtual std::vector<move> getLegalMoves();

    int pos[2];
    
};

class Pawn: public Piece {
public:

    Pawn(int pos[2]);

    std::vector<move> getLegalMoves();
};

#endif