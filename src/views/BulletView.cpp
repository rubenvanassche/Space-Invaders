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
	sf::Texture* texture;

	try{
		if(this->fBullet->getType() == ALIEN){
			texture = this->fAssets->getTexture("Resources/Bullets/two.png");
		}else if(this->fBullet->getType() == HUMAN){
			texture = this->fAssets->getTexture("Resources/Bullets/one.png");
		}
	}catch(std::runtime_error &e){
		sf::RectangleShape rectangle;
		rectangle.setPosition(bulletLocation);
		rectangle.setSize(sf::Vector2f(this->fBullet->getWidth(), this->fBullet->getHeight()));
		rectangle.setFillColor(sf::Color(255, 255, 255));
		this->fWindow->draw(rectangle);
		return;
	}
	sf::Sprite sprite(*texture);
	sprite.setPosition(bulletLocation);
	this->fWindow->draw(sprite);
}

BulletView::~BulletView() {
	// TODO Auto-generated destructor stub
}

