#ifndef CHESSY_H
#define CHESSY_H

/* public declarations */

typedef enum {
	White,
	Black
} Color;

typedef enum {
	Pawn,
	Bishop,
	Knight,
	Rook,
	Queen,
	King
} Rank;

typedef struct {
	int x;
	int y;
} Square;

typedef struct {
	Color color;
	Rank rank;
	Square square;
} Piece;

typedef struct {
	Color turn;
	Piece board[];
} Game;

typedef struct {
	Square from;
	Square to;
} Move;

Game NewGame();

Game Play(Game game, Move move, Color turn);

#ifdef CHESSY_C
/* private declarations */

static int IsCheck(Game game);

static int IsMate(Game game);

static int IsVaid(Game game, Move move);
#endif

#endif

