/*
 * BulletView.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletView.h"

void BulletView::draw() {
	if(this->fBullet->isDead()){
		return;
	}

	// Get the starting point
	sf::Vector2f bulletLocation = this->fBullet->getLocation();

	sf::Texture texture;
	if (!texture.loadFromFile("Resources/Bullets/two.png")){
		std::runtime_error("Resource couldn't be found!");
	}
	sf::Sprite sprite(texture);
	sprite.setPosition(bulletLocation);

	this->fWindow->draw(sprite);
}

BulletView::~BulletView() {
	// TODO Auto-generated destructor stub
}

