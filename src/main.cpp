#include "raylib.h"
#include "../libs/player/player.h"
int main(void){
	InitWindow(500, 500, "simple rpg c");
	SetTargetFPS(60);
	//Inicializando Variáveis do Jogador
	float vel = 4; float posX=50, posY=50;

	//Criação do objeto Player
	Player jogador(posX, posY, vel);

	while(!WindowShouldClose()){
		//Declarando Variáveis de Controle
		bool cima = IsKeyDown(KEY_UP) || IsKeyDown(KEY_W);
		bool baixo = IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S);
		bool direita = IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D);
		bool esquerda = IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A);

		//Movimentando Jogador
		float velv = (direita-esquerda)*vel;
		float velh = (baixo-cima)*vel;
		//Calculando Hipotenusa
		// float dis = distanciaPontos(0, 0, velh, velv);
		//Corrigindo Diagonal
		float dis = 0;
		if(dis>0){
			velh = (velh/dis)*vel;
			velv = (velv/dis)*vel;
		}
		//Movimentando
		posX+=velv; posY+=velh;

		//Desenhando
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawRectangle(posX, posY, 50, 50, RED);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
