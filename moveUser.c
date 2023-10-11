#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 12; i <= 25; i++)
    {
        gotoxy(40, i);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_INTENSITY);
        printf("Hello");
        Sleep(2000); // Sleep for 2000 milliseconds
    }

    return 0;
}