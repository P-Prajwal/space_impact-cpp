#ifndef ENEMY_H
#define ENEMY_H

class enemy{
	int x, y;
   int enemyStatus;
   int enmyType=1; //this variable will decide the enemy different forms
   public:
   enemy(int _x, int _y, int _enemyStatus); //constructor
   void paint();
   void erase();
   void move();
   void attack();
   int X(){ return x;} //this will give us the location of the enemy
   int Y(){ return y;}
   int getEnemyStatus(){ return enemyStatus;} //if the enemy is active or not, this will let us know.
   void setStatus(int s){ enemyStatus = s;}
};


#endif

