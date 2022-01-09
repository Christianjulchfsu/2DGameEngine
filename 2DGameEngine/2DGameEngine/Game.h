#include "stdafx.h"
#include "GameObject.h"
#include "Player.h"

class Game
{
	Player* player = nullptr;

public:
	Dbg debug;

	sf::RenderWindow window;
	sf::Event ev;

	std::vector<GameObject* > gameObjects;

	Game();
	virtual ~Game();

	void start();
	void input();
	void update();
	void render();

	const sf::RenderWindow& getWindow() const;

private:
	void initWindow();
};

