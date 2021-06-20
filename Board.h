#pragma once
#include <map>

class Chessman {
	enum class Man{
		K = 1,
		Q = 2,
		R = 3,
		B = 4,
		N = 5,
		P = 6		
	};

	//bool isWhite;
	//Man man;
	Chessman();
public:
	//Chessman(Man man_, bool isWhite_):isWhite(isWhite_),man(man_) {}
	static bool IsWhite(int N) {
		if (N >= 1 && N <= 6) return true;
		else if (N >= 7 && N <= 12) return false;
		//else ASSERT;
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
			//ASSERT
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
	int mBoard[8][8];
	std::map<char,wchar_t> White;
	std::map<char,wchar_t> Black;
public:
	Board();
	wchar_t GetSymbol(int s, int d);
	void Start();
};

