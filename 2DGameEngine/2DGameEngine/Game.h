class Game
{
	int width, height;
	sf::RenderWindow window;

	sf::Event ev;

public:
	Game(int _width, int _height);
	virtual ~Game();

	void inputs();
	void update();
	void render();

	const sf::RenderWindow& getWindow() const;

private:
	void initWindow(int _width, int _height);
};

