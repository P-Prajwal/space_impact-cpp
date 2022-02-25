#ifndef SPACESHIP_H
#define SPACESHIP_H

class starFighter{

	int x,y;
public:
      starFighter(int,int);
      void paint();
      void erase();
      void move();
      void reset(int, int);//this will reset the ship location if we loose a life
int X(){return x;} //to get location of ship
int Y(){return y;}

};

#endif
