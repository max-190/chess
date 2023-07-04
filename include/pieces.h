#include <iostream>
#include <vector>

#include "constants.h"

#ifndef PIECES_H
#define PIECES_H

class Piece {
public:
    Piece(bool nwIsWhite);
    
    virtual std::vector<Move> getLegalMoves() = 0;

    bool isWhite;
    
};

class Pawn: public Piece {
public:
    Pawn();
    std::vector<Move> getLegalMoves();
};

class Knight: public Piece {
public:
    Knight();
    std::vector<Move> getLegalMoves();
};

class Bishop: public Piece {
public:
    Bishop();
    std::vector<Move> getLegalMoves();
};

class Rook: public Piece {
public:
    Rook();
    std::vector<Move> getLegalMoves();
};

class Queen: public Piece {
public:
    Queen();
    std::vector<Move> getLegalMoves();
};

class King: public Piece {
public:
    King();
    std::vector<Move> getLegalMoves();
};

#endif