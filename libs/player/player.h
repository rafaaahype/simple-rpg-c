class Player{
  private:
    float posX, posY, vel;
    float distanciaPontos(float x1, float y1, float x2, float y2);
  public:
    Player(float posx, float posy, float velocidade);
    void movimentacao(bool cima, bool baixo, bool esquerda, bool direita);
    float getPosX();
    float getPosY();
};