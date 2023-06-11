#pragma once

#include <iostream>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Board.h"

class Piece 
{
public:
	Piece();
	virtual ~Piece();

	void InitPiece(PieceTypes type, sf::Vector2f pos);

private:
	sf::Sprite sprite;
	sf::Texture texture;

	PieceTypes type;

	int team = 0;

};