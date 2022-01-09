#include "stdafx.h"
#include "Game.h"

Game::Game()
{
	player = new Player();
	initWindow();
}

Game::~Game() {
	for (unsigned i = 0; i < gameObjects.size(); i++)
	{
		delete gameObjects[i];
	}
}

void Game::start()
{
	gameObjects.push_back(player);
}

void Game::input()
{
	while (window.pollEvent(ev))
	{
		if (ev.type == sf::Event::Closed) {
			debug.log("-Closing Application-");
			window.close();
		}
		else if (ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape)
		{
			debug.log("-Closing Application-");
			window.close();
		}

		if (ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::W)
		{
			player->name = "Max";
			std::cout<< "Playername: " << player->name << std::endl;
		}
	}
}

void Game::update()
{
	input();

	for (unsigned i = 0; i < gameObjects.size(); i++)
	{
		gameObjects[i]->update();
	}
}

void Game::render()
{
	// Clear //
	window.clear();

	// Draw //
	for (unsigned i = 0; i < gameObjects.size(); i++)
	{
		gameObjects[i]->render(window);
	}

	// Display //
	window.display();
}

const sf::RenderWindow& Game::getWindow() const
{
	return window;
}

void Game::initWindow()
{
	window.create(sf::VideoMode(800, 600), "Title", sf::Style::Close | sf::Style::Titlebar);
	debug.log("(Application) Window Succesfuly Created!");
}
