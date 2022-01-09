#include "stdafx.h"
#include "Vector2D.h"

class Transform
{
private:
	Vector2D position;
	Vector2D rotation;
	Vector2D scale;

	Transform();
	virtual ~Transform();

	void setPosition(Vector2D _vec);
	void setRotation(Vector2D _vec);
	void setScale(Vector2D _vec);

	Vector2D getPosition();
	Vector2D getRotation();
	Vector2D getScale();
};

