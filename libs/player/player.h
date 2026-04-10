
#include <raylib.h>
#include <math.h>

class Player{
  private:
    float posX, posY, vel;
    float distanciaPontos(float x1, float y1, float x2, float y2);
    Camera2D camera = {0};


  public:
    Player(float posx, float posy, float velocidade);
    void InitCam(int screenWidth, int screenHeight);
    void movimentacao();
    float getPosX();
    float getPosY();
    Camera2D getCamera();
};