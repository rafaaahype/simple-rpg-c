#include "raylib.h"
#include "../libs/player/player.h"
int main(void){
	InitWindow(500, 500, "simple rpg c");
	SetTargetFPS(60);
	//Inicializando Variáveis do Jogador
	float posX=50, posY=50, vel = 4;

	//Criação do objeto Player
	Player jogador(posX, posY, vel);

	while(!WindowShouldClose()){
		//Declarando Variáveis de Controle
		bool cima = IsKeyDown(KEY_UP) || IsKeyDown(KEY_W);
  	bool baixo = IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S);
  	bool direita = IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D);
  	bool esquerda = IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A);

		//Criando a movimentação do Player
		jogador.movimentacao(cima, baixo, esquerda, direita);

		//Desenhando
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawRectangle(jogador.getPosX(), jogador.getPosY(), 50, 50, RED);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
