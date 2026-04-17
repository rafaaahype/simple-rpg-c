#include "raylib.h"

int main(){
	InitWindow(600, 600, "simple rpg c");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		BeginDrawing();
			ClearBackground(RAYWHITE);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
