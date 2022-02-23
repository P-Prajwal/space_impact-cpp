#include<windows.h>
#include "goto.h"
using namespace std;

void gotoxy(int x, int y){
    COORD c={x,y};
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE),c);
}


