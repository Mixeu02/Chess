#include "Board.h"

Board::Board()
{
	this->InitBoard();
}

void Board::InitBoard()
{
	int column = 0;
	int row = 0;
	bool affector = false;
	for (int i = 0; i < 64; i++)
	{
		if (affector)
		{
			this->slots[i].setFillColor(i % 2 != 0 ? sf::Color::White : sf::Color::Black);
		}
		else
		{
			this->slots[i].setFillColor(i % 2 == 0 ? sf::Color::White : sf::Color::Black);
		}

		this->slots[i].setSize(sf::Vector2f(75.f, 75.f));

		std::cout << i % 8 << std::endl;

		this->slots[i].setPosition(row * 75.f, column * 75.f);

		row++;

		if (i % 8 == 7)
		{
			column++;
			row = 0;

			affector = !affector;
		}
	}
}

void Board::Render(sf::RenderTarget* window)
{
	for (sf::RectangleShape currentSlot : this->slots)
	{
		window->draw(currentSlot);
	}
}