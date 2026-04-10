#include "player.h"
#include <math.h>
Player::Player(float posX, float posY, float vel){
  this->posX = posX;
  this->posY = posY;
  this->vel = vel;
}

float Player::distanciaPontos(float x1, float y1, float x2, float y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

void Player::movimentacao(bool cima, bool baixo, bool esquerda, bool direita){
  //Movimentando Jogador
  float velv = (direita-esquerda)*vel;
  float velh = (baixo-cima)*vel;

  float dis = distanciaPontos(0, 0, velh, velv);
  if(dis>0){
    velh = (velh/dis)*vel;
    velv = (velv/dis)*vel;
  }
  //Movimentando
  this->posX+=velv; this->posY+=velh;
}

float Player::getPosX(){
  return this->posX;
}


float Player::getPosY(){
  return this->posY;
}