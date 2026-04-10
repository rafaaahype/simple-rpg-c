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

void Player::InitCam(int tamanhoX, int tamanhoY){
  this->camera.target = (Vector2){ this->posX + 20.0f, this->posY + 20.0f };
  this->camera.offset = (Vector2){ tamanhoX/2.0f, tamanhoY/2.0f };
  this->camera.rotation = 0.0f;
  this->camera.zoom = 1.0f;
}

void Player::movimentacao(){
  //Declarando Variáveis de Controle
  bool cima = IsKeyDown(KEY_UP) || IsKeyDown(KEY_W);
  bool baixo = IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S);
  bool direita = IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D);
  bool esquerda = IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A);


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
  camera.target = (Vector2){ this->posX + 25, this->posY + 25};
}

float Player::getPosX(){
  return this->posX;
}


float Player::getPosY(){
  return this->posY;
}

Camera2D Player::getCamera(){
  return this->camera;
}