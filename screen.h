#ifndef SCREEN_H
#define SCREEN_H

//GAME LIMITS
//X
int leftLimit = 3;
int rightLimit = 117;
//Y
int limiteSuperior = 4;
int limiteInferior = 26;
//right limit of the ship. our ship cannot go so far to the right.
int rightLimitShip = 35;


bool windowAdjust(int _a, int _b);
void gamePlayFrame();

#endif
