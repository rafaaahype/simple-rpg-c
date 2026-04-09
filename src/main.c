#include "raylib.h"

int main(void){
	InitWindow(500, 500, "simple rpg c");
	SetTargetFPS(60);
	while(!WindowShouldClose()){
		ClearBackground(RAYWHITE);
		BeginDrawing();
			DrawText("Hello Window", 200, 250, 25, BLACK);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
