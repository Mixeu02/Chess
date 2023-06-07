#include "Game.h"

int main()
{
	Game game;

	while (game.GetIsRunning())
	{
		game.Update();
		game.Render();
	}

	return 0;
}