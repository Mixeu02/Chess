#include "Piece.h"

Piece::Piece() {}

Piece::~Piece() {}

void Piece::InitPiece(PieceTypes newType, sf::Vector2f pos)
{
	if (!this->texture.loadFromFile("./assets/images/pieces/Pawn.png"))
	{
		std::cout << "Error when loading piece texture" << std::endl;
		return;
	}

	this->sprite.setTexture(this->texture);
}