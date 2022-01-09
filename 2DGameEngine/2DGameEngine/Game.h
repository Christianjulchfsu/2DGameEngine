class Game
{
public:
	int width, height;
	sf::RenderWindow window;

	sf::Event ev;

	Game(int _width, int _height);
	virtual ~Game();

	void input();
	void update();
	void render();

	const sf::RenderWindow& getWindow() const;

private:
	void initWindow(int _width, int _height);
};

