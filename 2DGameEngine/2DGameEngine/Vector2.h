#include "stdafx.h"

class Vector2
{
private:
	float xValue;
	float yValue;

public:
	// static
	Vector2 down();
	Vector2 up();
	Vector2 right();
	Vector2 left();
	Vector2 one();
	Vector2 zero();

	// properties
	float magnitude();
	Vector2 normalized();
	float x();
	float y();

	// public methods
	bool equals(Vector2 _vec);
	void normalize();
	void set(float _x, float _y);

};

