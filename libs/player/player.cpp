#include "player.h"
#include <math.h>
Player::Player(float posx, float posy, float velocidade){
  posX = posx;
  posY = posy;
  vel = velocidade;
}

float distanciaPontos(float x1, float y1, float x2, float y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
