#include "screen.h"
#include<windows.h>
#include "goto.h"
using namespace std;

//to modify the window size
bool windowAdjust(int a, int b) {
	_COORD C;
	C.X = a;
	C.Y = b;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = a - 1;
	Rect.Bottom = b - 1;

	//it gets the console identifier
	HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

	// adjust the buffer to the new size
	SetConsoleScreenBufferSize(Console, C);

	// it changes console size.
	SetConsoleWindowInfo(Console, TRUE, &Rect);
	return TRUE;
}

void gamePlayFrame(){//this is game frame

   int x, y;
//HORIZONTAL
   //--Up
   	x=2;
   	y=3;
   	gotoxy(x,y);
   	for(int z = 0; z <= 117; z++){
     		printf("%c", 205);
   	}
   //--Down
      y=30;
      gotoxy(x,y);
   	for(int z = 0; z <= 117; z++){
     		printf("%c", 205);
   	}

//VERTICAL
   //--Right
      x=119;
      for(int y = 3; y < 30; y++){
      	gotoxy(x,y);
         printf("%c",186);
   	}

   //--Left
      x=2;
      for(int y = 3; y < 30; y++){
      	gotoxy(x,y);
         printf("%c",186);
   }
}
