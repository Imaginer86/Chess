// Chess.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fcntl.h>
#include <io.h>
//#include <stdio.h>
//#include <Windows.h>

//#include "Board.h"

using namespace std;

/*enum ConsoleColor
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
};*/
//void SetColor(ConsoleColor text, ConsoleColor background)
//{
    //SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
//}

//int _setmode(
    //int fd,
    //int mode
//);

//Board board;

int wmain(int argc, wchar_t* argv[], wchar_t* envp[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    ////////////////////меняем размер консоли - опционально - можно пропустить
    //system("mode con cols=100 lines=50"); //размер окна, вывод нужного количества строк в консоль
    //HANDLE  hout = GetStdHandle(STD_OUTPUT_HANDLE);
    //COORD  size{ 100, 100 };//символов строки, строк
    //SetConsoleScreenBufferSize(hout, size);//размер буфера
    ///////////////////////////////////Меняем шрифт для отображения символов Unicode, можно пропустить - если у вас установлен такой
    //CONSOLE_FONT_INFOEX cfi;
    //cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    //cfi.nFont = 0;
    //cfi.dwFontSize.X = 8;
    //cfi.dwFontSize.Y = 14;
    //cfi.FontFamily = FF_DONTCARE;
    //cfi.FontWeight = FW_NORMAL;
    //wcscpy_s(cfi.FaceName, L"Lucida Console");
    //SetCurrentConsoleFontEx(hout, false, &cfi);
    ///////////////////////////////////Меняем шрифт

    //HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_BLUE | BACKGROUND_RED);


    //wcout << L'♟' << endl;
    int bc = 0;
                                                                    
    for (int i = 0; i <= 7; ++i)
    {
        //if (i == 6) continue;
        for (int j = 0; j <= 7; ++j)
        {
            //ConsoleColor text = Black;
            //ConsoleColor background = bc % 2 ? DarkGray : LightGray;
            ++bc;
            //SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
            wchar_t c = L'♟';// = Board::GetSymbol(i, j);
            wcout << c;
            c = L'♙';// = Board::GetSymbol(i, j);
            wcout << c;

        }
        ++bc;
        wcout << endl;
    }

    //SetConsoleTextAttribute(hConsoleHandle, (WORD)((Black << 4) | White));


    //wstring str = L"\x265B\n";
    //wcout << str << endl;
    return 0;
}