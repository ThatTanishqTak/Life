#include "globals.h"
#include "grid.h"
#include "player.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Game Of Life");
	SetTargetFPS(35);

	Player player;
	Grid grid;

	while (!WindowShouldClose())
	{
		for (GameObjects* gameObjects : gameObject) { gameObjects->Update(); }

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObject) { gameObjects->Render(); }

		EndDrawing();
	}

	CloseWindow();
	return 0;
}