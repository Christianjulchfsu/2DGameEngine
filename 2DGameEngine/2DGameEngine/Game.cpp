#include "stdafx.h"
#include "Game.h"

Game::Game(int _width, int _height)
{
	width = _width;
	height = _height;

	initWindow(_width, _height);
}

Game::~Game() {}

void Game::inputs()
{
	// Poll window events
	while (window.isOpen())
	{
		// If the user presses the exit button on the application.
		if (ev.type == sf::Event::Closed) {
			//debug.log("Application closing...");
			window.close();
		}
		else if (ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape) {
			//debug.log("Application closing...");
			window.close();
		}
	}
}

void Game::update()
{
	// Run inputs before updating.
	inputs();
}

void Game::render()
{
	//window.clear(sf::Color::Black);

	// Render here ->

	//window.display();
}

const sf::RenderWindow& Game::getWindow() const
{
	return window;
}

void Game::initWindow(int _width, int _height)
{
	window.create(sf::VideoMode(_width, _height), "SFML Project", sf::Style::Close | sf::Style::Titlebar);
}
