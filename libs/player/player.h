#include "raylib.h"

class Player{
  private:
    float posX, posY, vel;
    #define CIMA IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)
  public:
    Player(float posx, float posy, float velocidade);
    void movimentacao();
};