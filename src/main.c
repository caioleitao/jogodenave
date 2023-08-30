#include "raylib.h"
#include "stdio.h"

int main(){
	const int screenWidth = 1280;
	const int screenHeight = 720;

	InitWindow(screenWidth, screenHeight, "Jogo de navinha");

	Texture2D background = LoadTexture("background.png");

	while(!WindowShouldClose()){
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawTexture(background, 0, 0, BLACK);

		EndDrawing();
	}	

	UnloadTexture(background);
	CloseWindow();
	
	return 0;
}
