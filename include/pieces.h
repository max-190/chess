#include <iostream>
#include <vector>

#include "constants.h"

#ifndef PIECES_H
#define PIECES_H

class Piece {
public:
    Piece(bool nwIsWhite);
    virtual ~Piece();
    
    virtual std::vector<Move> getLegalMoves() = 0;

    bool isWhite;
    
};

class Pawn: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

class Knight: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

class Bishop: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

class Rook: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

class Queen: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

class King: public Piece {
public:

    std::vector<Move> getLegalMoves();
};

#endif