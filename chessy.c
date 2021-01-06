#define CHESSY_C
#include "chessy.h"

/* chessy.c begins here */
Game NewGame() {
	return (Game){
		.turn  = White,
		.board = {
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 0, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 1, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 2, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 3, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 4, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 5, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 6, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Pawn,
				.square = { .x = 7, .y = 1 }
			},
			{
				.color  = White,
				.rank   = Rook,
				.square = { .x = 0, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Knight,
				.square = { .x = 1, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Bishop,
				.square = { .x = 2, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Queen,
				.square = { .x = 3, .y = 0 }
			},
			{
				.color  = White,
				.rank   = King,
				.square = { .x = 4, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Bishop,
				.square = { .x = 5, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Knight,
				.square = { .x = 6, .y = 0 }
			},
			{
				.color  = White,
				.rank   = Rook,
				.square = { .x = 7, .y = 0 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 0, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 1, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 2, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 3, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 4, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 5, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 6, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Pawn,
				.square = { .x = 7, .y = 6 }
			},
			{
				.color  = Black,
				.rank   = Rook,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Knight,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Bishop,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Queen,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = King,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Bishop,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Knight,
				.square = { .x = 0, .y = 7 }
			},
			{
				.color  = Black,
				.rank   = Rook,
				.square = { .x = 0, .y = 7 }
			},
		}
	};
}

Game Play(Game game, Move move, Color turn);

static int IsCheck(Game game) {
	return -1;
}

static int IsMate(Game game) {
	int check = IsCheck(game);
	
	if (check) {
		return check;
	}
	
	return -1;
}

static int IsVaid(Game game, Move move) {
	return -1;
}
/* chessy.c ends here */

#undef CHESSY_C
