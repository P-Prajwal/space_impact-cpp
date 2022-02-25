#include "screen.h"
#include "goto.h"
#include<stdio.h>
using namespace std;

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
