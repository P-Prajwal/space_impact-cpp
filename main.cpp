#include<iostream>
#include "spaceShip.h"
#include "enemy.h"
#include "screen.h"
#include "goto.h"
using namespace std;

int main(){
        int life=3;
//GAME LIMITS
//X
	int leftLimit = 3;
	int rightLimit = 117;
//Y
	int limiteSuperior = 4;
	int limiteInferior = 26;
//right limit of the ship. our ship cannot go so far to the right.
	int rightLimitShip = 35;
	bool gameOver=false;
	gamePlayFrame();
        starFighter spaceShip(5,15);
	spaceShip.paint();//Start painting ship

	while(gameOver!=true){
		spaceShip.move();
		
		//Next bullet functions and enemy formation to be added, working on them.
		


	}


	if(gameOver==true){
		//if we are out of life, then game over
		if(life<=0){
			gotoxy(56,15);
			cout<<"GAME OVER";
		}

	 else{ //if we reach here means we are alive and the game has finished
                
		 gotoxy(56,15);
		 cout<<"VICTORY";
	 }

	}
	return 0;
}
	     

 
		

