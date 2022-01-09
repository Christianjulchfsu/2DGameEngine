#include "stdafx.h"

class Vector2D
{
private:
	float xValue;
	float yValue;

public:
	Vector2D();
	Vector2D(float _x, float _y);
	virtual ~Vector2D();

	// static
	Vector2D down();
	Vector2D up();
	Vector2D right();
	Vector2D left();
	Vector2D one();
	Vector2D zero();

	// properties
	float magnitude();
	Vector2D normalized();
	float x();
	float y();

	// public methods
	bool equals(Vector2D _vec);
	void normalize();
	void set(float _x, float _y);

};

