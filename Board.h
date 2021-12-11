#pragma once
#include <cassert>
#include <map>

class Chessman {
	/*static enum class Man {
		K = 1,
		Q = 2,
		R = 3,
		B = 4,
		N = 5,
		P = 6		
	};*/

	//bool isWhite;
	//Man man;
	//Chessman();
public:
	//Chessman(Man man_, bool isWhite_):isWhite(isWhite_),man(man_) {}
	static bool IsWhite(int N) {
		if (N >= 1 && N <= 6) return true;
		else if (N >= 7 && N <= 12) return false;
		else {assert(true); return false;}
	}
	static bool IsBlack(int N) {
		if (N >= 7 && N <= 12) return true;
		else if (N >= 1 && N <= 6) return false;
		else {assert(true); return false;}
	}
	static char GetMan(int N)
	{
		switch (N)
		{
		case 1:
		case 7:
			return 'K';
			break;
		case 2:
		case 8:
			return 'Q';
			break;
		case 3:
		case 9:
			return 'R';
			break;
		case 4:
		case 10:
			return 'B';
		case 5:
		case 11:
			return 'N';
		case 6:
		case 12:
			return 'P';
		default:
			assert(true);
			return 'T';
			break;
		}
		/*
		switch (man)
		{
		case Chessman::Man::K:
			return 'K';
			break;
		case Chessman::Man::Q:
			return 'Q';
			break;
		case Chessman::Man::R:
			return 'R';
			break;
		case Chessman::Man::B:
			return 'B';
			break;
		case Chessman::Man::N:
			return 'N';
			break;
		case Chessman::Man::P:
			return 'P';
			break;
		default:
			break;
		}*/
	}
	/*
	int GetManN()
	{
		switch (man)
		{
		case Chessman::Man::K:
			return isWhite ? 1 : 7;
			break;
		case Chessman::Man::Q:
			return isWhite ? 2 : 8;
			break;
		case Chessman::Man::R:
			return isWhite ? 3 : 9;
			break;
		case Chessman::Man::B:
			return isWhite ? 4 : 10;
			break;
		case Chessman::Man::N:
			return isWhite ? 5 : 11;
			break;
		case Chessman::Man::P:
			return isWhite ? 6 : 12;
			break;
		default:
			break;
		}
	}
	*/
};



class Board
{
public:
	static int mBoard[8][8];
	static std::map<char, wchar_t> White;
	static std::map<char, wchar_t> Black;
	//Board();
	//wchar_t GetSymbol(int s, int d);
	//void Start();

	static wchar_t GetSymbol(int s, int d)
	{
		int n = mBoard[s][d];
		if (n == 0) return L't';
		if (Chessman::IsWhite(n)) return White[Chessman::GetMan(n)];
		else if (Chessman::IsBlack(n)) return Black[Chessman::GetMan(n)];
		else { assert(true); return L'T'; }
	}

	static void Start()
	{
		White['K'] = L'♔';
		White['Q'] = L'♕';
		White['R'] = L'♗';
		White['B'] = L'♘';
		White['N'] = L'♖';
		White['P'] = L'♙';

		Black['K'] = L'♚';
		Black['Q'] = L'♛';
		Black['R'] = L'♝';
		Black['B'] = L'♞';
		Black['N'] = L'♜';
		Black['P'] = L'♙';

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
};