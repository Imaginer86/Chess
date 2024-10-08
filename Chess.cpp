 // Chess.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <fcntl.h>
#include <io.h>

//#include <conio.h>
//#include <stdio.h>

#include <iostream>
#include <string>

#include "Board.h"

using namespace std;


void ClearScreen()
{
    wcout << L"\033c";
}




int main(int argc, wchar_t* argv[], wchar_t* envp[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    //_setmode(_fileno(stderr), _O_U16TEXT);
    //system("color FC");

    //wcout << L'♟' << endl;
    //wcout << "\x1b[32m Hello World" << endl;
    /*
    for (int i = 0; i <= 7; ++i)
    {
        for (int j = 0; j <= 7; ++j)
        {
            wchar_t c = board.GetSymbol(i, j);
            if (c == 't') c = L' ';
            wcout << c;
        }
        wcout << endl;
    }
    */
    //wstring str = L"\x265B\n";
    //wcout << str << endl;

    bool playerISWhite = true;
    Board board;

    board.Init();
    ClearScreen();

    do
    {        
        //wcout << L" Привіт!!!" << endl;        
        board.Print();        
        
        wstring str;
        wcout << L"White move: " << endl;
        getline(wcin, str);
        if (str.size() != 5 || (str[0] < L'a' || str[0] > L'h') || (str[0] < L'a' || str[0] > L'h') || (str[1] < L'1' || str[1] > L'8') || (str[3] < L'a' || str[3] > L'h') || (str[4] < L'1' || str[4] > L'8')) {
            ClearScreen();
            wcout << L"Wrong input!!!" << endl; 
        }
        else
        {
            int bcol = str[0] - L'a';
            wchar_t t[2];
            t[0] = str[1];
            t[1] = L'\0';
            int brow = _wtoi(t) - 1;
            int ecol = str[3] - L'a';
            t[0] = str[4];
            t[1] = L'\0';
            int erow = _wtoi(t) - 1;

            
            ClearScreen();
            wcout << brow << bcol << erow << ecol << endl;

            board.Move(brow, bcol, erow, ecol);

            //wchar_t c;
            //wcin >> c;
            //wcout << bcol << brow << ' ' << ecol << erow;
        }
        //ClearScreen();
    } while (true);    

    return 0;
}