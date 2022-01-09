#include "stdafx.h"
#include "Transform.h"

Transform::Transform()
{
}

Transform::~Transform()
{
}

void Transform::setPosition(Vector2D _vec)
{
	position = _vec;
}

void Transform::setRotation(Vector2D _vec)
{
	rotation = _vec;
}

void Transform::setScale(Vector2D _vec)
{
	scale = _vec;
}

Vector2D Transform::getPosition()
{
	return position;
}

Vector2D Transform::getRotation()
{
	return rotation;
}

Vector2D Transform::getScale()
{
	return scale;
}
