#include "enemy.h"
#include<stdio.h>
#include "screen.h"
#include "goto.h"
#include<iostream>
using namespace std;

int lefLimit=3;
//Enemy Constructor
enemy::enemy(int _x, int _y,  int _enemyStatus){

   x = _x;
   y = _y;
   enemyStatus = _enemyStatus;
}

//Paint enemy ship
void enemy::paint(){
	

   if(enmyType > 12){    //first form of the enemy
   	gotoxy(x,y); 	printf("%c%c%c",65,65,65);
   }


   if(enmyType <= 12){  //second form of the enemy
   	gotoxy(x,y); 	printf("%c%c%c",65,65,65);
   	gotoxy(x,y+1); printf("%c%c%c",66,66,66);
  }
}

//erase the enemy shape from screen
void enemy::erase(){

   gotoxy(x,y); 	
   printf("%c%c%c%c",32,32,32,32);
   gotoxy(x,y+1); 
   printf("%c%c%c%c",32,32,32,32);
}

void enemy::move(){
//erasing the last location of the enemy
   erase();
   if(x > lefLimit){
      x--;
   	paint();
     }
}

//To be added bullet fucntion, working on it.
