#include "stdafx.h"
#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::update() {
	//std::cout << "Updating Player" << std::endl;
	GameObject::update();
}

void Player::render(sf::RenderTarget& target) {
	GameObject::render(target);
}
