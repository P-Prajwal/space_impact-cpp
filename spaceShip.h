#ifndef SPACESHIP_H
#define SPACESHIP_H

class starFighter{

public:
      starFighter(int _x,int _y);
      void paint();
      void erase();
      void move();
      void reset(int hor, int ver);//this will reset the ship location if we loose a life
int X(){return x;} //to get location of ship
int Y(){return y;}

};

#endif
      
