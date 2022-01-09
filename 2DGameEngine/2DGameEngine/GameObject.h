#include "stdafx.h"
#include "Transform.h"

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	std::string name;
	std::string tag;

	Transform transform;
};

