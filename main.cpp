#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int main()
{
    int x,y;
    char dir;
    bool draw = true;

    x=40;
    y=20;

    gotoxy(x,y);
    cout<<"#";
    while(true)
    {

    dir=getch();

    if(dir=='w')
        y--;

    if(dir=='s')
        y++;

    if(dir=='d')
        x++;

    if(dir=='a')
        x--;
    if(dir=='c')
        system("cls");


    if(dir=='q')
    {
        if(draw)
            draw=false;
        else
            draw=true;


    }
    gotoxy(x,y);
    if(draw)
        cout<<"#";
    else
        cout<<" ";


    }

    return 0;
}
