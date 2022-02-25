#include<iostream>
#include<conio.h>
#include<stdio.h>
#include "spaceShip.h"
#include "goto.h"

using namespace std;


//GAME LIMITS
//X
int leftLimit = 3;
int rightLimit = 117;
//Y
int limiteSuperior = 4;
int limiteInferior = 29;
//right limit of the ship, our ship cannot go so far to the right.
int rightLimitShip = 35;
int gameOver=false;


//CONSTRUTOR

starFighter::starFighter(int _x,int _y){
       x=_x;
       y=_y;
}

//PAINTING SHIP

void starFighter::paint(){

  	gotoxy(x,y);
  	printf("%c%c",62,45);// It will look something like this >-
}

//ERASE
void starFighter::erase(){
	gotoxy(x,y);
	printf("%c%c",32,32);
}

//NEW  LOCATION
void starFighter::reset(int new_x, int new_y){
	x=new_x;
	y=new_y;
}


//MOVE SHIP
void starFighter::move(){//we hit key to move ship
 if(kbhit()){
                char key=getch();
                erase(); //delete last location
                if(key == 'a'){
                        if(x > leftLimit){
                        x--;  //goes to the left
                        }
                }
 
                if(key == 'd'){
                        if(x < rightLimitShip){
                        x++;   //goes to the righ
                        }
                }	
              	if(key == 'w'){
             		if(y > limiteSuperior){
                	y--;    //goes up
               		}
             	}

             	if(key == 's'){
             		if(y < limiteInferior){
                	y++;    //goes down
               		}
             	}

	     	if(key == 'q'){
			gameOver = true;
		}
             paint(); //painting the new location of the ship
 	}
}

//To be added bullet fucntion, working on it.
