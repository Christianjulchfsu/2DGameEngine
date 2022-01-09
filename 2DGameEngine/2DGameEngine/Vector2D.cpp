#include "stdafx.h"
#include "Vector2D.h"

Vector2D::Vector2D()
{
    xValue = 0.0f;
    yValue = 0.0f;
}

Vector2D::Vector2D(float _x, float _y)
{
    xValue = _x;
    yValue = _y;
}

Vector2D::~Vector2D() {}

Vector2D Vector2D::down()
{
    return Vector2D(0.0f, -1.0f);
}

Vector2D Vector2D::up()
{
    return Vector2D(0.0f, 1.0f);
}

Vector2D Vector2D::right()
{
    return Vector2D(1.0f, 0.0f);
}

Vector2D Vector2D::left()
{
    return Vector2D(-1.0f, 0.0f);
}

Vector2D Vector2D::one()
{
    return Vector2D(1.0f, 1.0f);
}

Vector2D Vector2D::zero()
{
    return Vector2D(0.0f, 0.0f);
}

float Vector2D::magnitude()
{
    float m = sqrt(xValue * xValue + yValue * yValue);
    return m;
}

Vector2D Vector2D::normalized()
{
    float m = magnitude();
    float _x = xValue / m;
    float _y = yValue / m;

    return Vector2D(_x, _y);
}

float Vector2D::x()
{
    return xValue;
}

float Vector2D::y()
{
    return yValue;
}

bool Vector2D::equals(Vector2D _vec)
{
    float x = _vec.x();
    float y = _vec.y();

    if (x == xValue && y == yValue) {
        return true;
    }

    return false;
}

void Vector2D::normalize()
{
    float m = magnitude();

    xValue = xValue / m;
    yValue = yValue / m;
}

void Vector2D::set(float _x, float _y)
{
    xValue = _x;
    yValue = _y;
}
