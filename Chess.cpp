// Chess.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <cstdio>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>

#include "Board.h"

using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

//void SetColor(ConsoleColor text, ConsoleColor background)
//{
    //SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
//}

Board board;

int main()
{

    _setmode(_fileno(stdout), _O_U16TEXT);
    //_setmode(_fileno(stdin), _O_U16TEXT);

    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_BLUE | BACKGROUND_RED);
    int bc = 0;

    for (int i = 7; i >= 0; --i)
    {
        for (int j = 7; j >= 0; --j)
        {
            ConsoleColor text = Black;
            ConsoleColor background = bc % 2 ? DarkGray : LightGray;
            ++bc;
            SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
            wchar_t c = board.GetSymbol(i, j);
            wcout << ' ' << c << ' ';
        }
        ++bc;
        wcout << endl;
    }

    SetConsoleTextAttribute(hConsoleHandle, (WORD)((Black << 4) | White));


    //wstring str = L"\x265B\n";
    //wcout << str << endl;
    return 0;
}