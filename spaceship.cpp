#include<iostream>
#include<windows.h>
#include<conio.h>
#include "spaceship.h"
using namespace std;

//DECLARING OF GOTO FUNCTION TO MOVE LOCATIONS
void gotoxy(int x, int y)
{
    COORD c={x,y};
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE),c);
}


//CONSTRUTOR

starFighter::starFighter(int _x,int _y){
       x=_x;
       y=_y;
}

//PAINTING SHIP

void starFighter::paint(){

  	gotoxy(x,y);
  	printf("%c%c%c",62,45);// It will look something like this >-
}

//ERASE
void starFighter::erase(){
	gotoxy(x,y);
	printf("%c%c%c",32,32,32);
}

//NEW  LOCATION
void starFighter::reset(int new_x, int new_y){
	x=new_x;
	y=new_y;
}

//CREATE SHIP HERE
starFighter spaceShip(5,15);


//MOVE SHIP
void starFighter::move(){ //when we hit a key the program must find next location on screen.
if(kbhit()){
	char key=getch();
	erase(); //delete last location
        
