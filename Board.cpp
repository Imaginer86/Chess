#include "Board.h"





Board::Board()
{
	White['K'] = L'\x2654';
	White['Q'] = L'\x2655';
	White['R'] = L'\x2656';
	White['B'] = L'\x2657';
	White['N'] = L'\x2658';
	White['P'] = L'\x2659';

	Black['K'] = L'\x265A';
	Black['Q'] = L'\x265B';
	Black['R'] = L'\x265C';
	Black['B'] = L'\x265D';
	Black['N'] = L'\x265E';
	Black['P'] = L'\x265F';

	mBoard[0][0] = 3;
	mBoard[0][1] = 5;
	mBoard[0][2] = 4;
	mBoard[0][3] = 2;
	mBoard[0][4] = 1;
	mBoard[0][5] = 4;
	mBoard[0][6] = 5;
	mBoard[0][7] = 3;

	mBoard[1][0] = 6;
	mBoard[1][1] = 6;
	mBoard[1][2] = 6;
	mBoard[1][3] = 6;
	mBoard[1][4] = 6;
	mBoard[1][5] = 6;
	mBoard[1][6] = 6;
	mBoard[1][7] = 6;

	mBoard[2][0] = 0;
	mBoard[2][1] = 0;
	mBoard[2][2] = 0;
	mBoard[2][3] = 0;
	mBoard[2][4] = 0;
	mBoard[2][5] = 0;
	mBoard[2][6] = 0;
	mBoard[2][7] = 0;

	mBoard[3][0] = 0;
	mBoard[3][1] = 0;
	mBoard[3][2] = 0;
	mBoard[3][3] = 0;
	mBoard[3][4] = 0;
	mBoard[3][5] = 0;
	mBoard[3][6] = 0;
	mBoard[3][7] = 0;

	mBoard[4][0] = 0;
	mBoard[4][1] = 0;
	mBoard[4][2] = 0;
	mBoard[4][3] = 0;
	mBoard[4][4] = 0;
	mBoard[4][5] = 0;
	mBoard[4][6] = 0;
	mBoard[4][7] = 0;

	mBoard[5][0] = 0;
	mBoard[5][1] = 0;
	mBoard[5][2] = 0;
	mBoard[5][3] = 0;
	mBoard[5][4] = 0;
	mBoard[5][5] = 0;
	mBoard[5][6] = 0;
	mBoard[5][7] = 0;

	mBoard[6][0] = 12;
	mBoard[6][1] = 12;
	mBoard[6][2] = 12;
	mBoard[6][3] = 12;
	mBoard[6][4] = 12;
	mBoard[6][5] = 12;
	mBoard[6][6] = 12;
	mBoard[6][7] = 12;

	mBoard[7][0] = 9;
	mBoard[7][1] = 11;
	mBoard[7][2] = 10;
	mBoard[7][3] = 8;
	mBoard[7][4] = 7;
	mBoard[7][5] = 10;
	mBoard[7][6] = 11;
	mBoard[7][7] = 9;
}

wchar_t Board::GetSymbol(int s, int d)
{
	int n = mBoard[s][d];
	if (n == 0) return L' ';
	if (Chessman::IsWhite(n)) return White[Chessman::GetMan(n)];
	else return Black[Chessman::GetMan(n)];
	return L'\0';
}

void Board::Start()
{

}
