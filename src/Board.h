#pragma once

#include <iostream>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Board
{
public:
	Board();
	
	void Render(sf::RenderTarget* window);

private:
	sf::RectangleShape slots[64];

	void InitBoard();

};