#pragma once

#include <iostream>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Board.h"

class Game
{
public:
	Game();
	virtual ~Game();

	// Accessors
	const bool GetIsRunning() const;

	void Update();
	void Render();

private:
	sf::RenderWindow* window;

	sf::Event ev;

	Board board;

	// Primeiro PascalCase! Obrigado Rina!
	void InitWindow();

	void PollEvents();

};