#include "raylib.h"
#include "../libs/player/player.h"

#define TAMANHO_X 500
#define TAMANHO_Y 500

int main(void){
	InitWindow(TAMANHO_X, TAMANHO_Y, "simple rpg c");
	SetTargetFPS(60);
	//Inicializando Variáveis do Jogador
	float posX=50, posY=50, vel = 4;

	//Criação do objeto Player
	Player jogador(posX, posY, vel);
	jogador.InitCam(TAMANHO_X, TAMANHO_Y);

	while(!WindowShouldClose()){


		//Criando a movimentação do Player
		jogador.movimentacao();

		//Desenhando
		BeginDrawing();
			BeginMode2D(jogador.getCamera());
			ClearBackground(RAYWHITE);
			DrawRectangle(jogador.getPosX(), jogador.getPosY(), 50, 50, RED);
			DrawRectangle(40, 40, 50, 50, BLUE);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}
