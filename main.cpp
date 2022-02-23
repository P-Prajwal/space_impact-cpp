#include<iostream>
#include "spaceShip.h"
#include "enemy.h"
#include "screen.h"
#include "goto.h"
using namespace std;

int main(){

	windowAdjust(122,133);

	spaceship.paint();//Start painting ship

	while(gameOver!=true){
		gamePlayerFrame();
		spaceship.move();
		
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

	getch();
	return 0;
}
	     

 
		

