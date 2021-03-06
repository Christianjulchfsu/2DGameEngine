#include "stdafx.h"

class Game
{
public:
	sf::RenderWindow window;
	sf::Event ev;

	Game();
	virtual ~Game();

	void input();
	void update();
	void render();

	const sf::RenderWindow& getWindow() const;

private:
	void initWindow();
};

