#include "raylib.h"
#include <math.h>
#include <stdio.h>

float distancia_pontos(float x1, float y1, float x2, float y2){
	return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

int main(void){
	//Inicializando Variáveis do Jogador
	float posX=50, posY=50, vel=4;
	//
	InitWindow(500, 500, "simple rpg c");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		//Inicializando Variáveis
		bool cima = IsKeyDown(KEY_W) || IsKeyDown(KEY_UP);
		bool baixo = IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN);
		bool direita = IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT);
		bool esquerda = IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT);
		//Movimentação Jogador
		float velv = (baixo-cima)*vel;
		float velh = (direita-esquerda)*vel;

		float len = distancia_pontos(0,0,velh,velv);

		if(len>0){
			velh = (velh/len)*vel;
			velv = (velv/len)*vel;
		}

		posX+=velh; posY+=velv;
		//Desenhando as parada
		ClearBackground(RAYWHITE);
		BeginDrawing();
			printf("Velv: %.2f\n", velv);
			printf("Velh: %.2f\n", velh);
			printf("Hipotenusa: %.2f\n", len);
			DrawRectangle(posX, posY, 30, 30, RED);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
