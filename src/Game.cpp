#include "Game.h"

Game::Game()
{
	this->InitWindow();
	
	for (int i = 0; i < sizeof(this->pieces); i++)
	{
		this->pieces[i].InitPiece(PieceTypes::Pawn, sf::Vector2f(0.f + i, 0.f));
	}
}

Game::~Game()
{
	delete this->window;
}

// Init
void Game::InitWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(600, 600), "Chess", sf::Style::Titlebar | sf::Style::Close);
}

// Main
void Game::Update()
{
	this->PollEvents();
}

void Game::PollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		}
	}
}

void Game::Render()
{
	this->window->clear(sf::Color::Black);
	this->board.Render(this->window);
	this->window->display();
}

// Accessors
const bool Game::GetIsRunning() const
{
	return this->window->isOpen();
}