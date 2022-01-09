#include "GameObject.h"
#include "Graphic2D.h"

class Player : public GameObject {
private:
	Graphic2D graphics;

public:
	Player();
	virtual ~Player();

	virtual void update() override;
	virtual void render(sf::RenderTarget& target) override;
};

