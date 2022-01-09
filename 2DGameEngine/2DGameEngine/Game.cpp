#include "stdafx.h"
#include "Game.h"

Game::Game()
{
	initWindow();
}

Game::~Game()
{

}

void Game::input()
{
	while (window.pollEvent(ev))
	{
		if (ev.type == sf::Event::Closed) {
			window.close();
		}
		else if (ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape)
		{
			window.close();
		}
	}
}

void Game::update()
{
	input();
}

void Game::render()
{
	window.clear();

	window.display();
}

const sf::RenderWindow& Game::getWindow() const
{
	return window;
}

void Game::initWindow()
{
	window.create(sf::VideoMode(800, 600), "Title", sf::Style::Close | sf::Style::Titlebar);
}
