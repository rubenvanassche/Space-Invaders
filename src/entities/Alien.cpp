/*
 * Alien.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Alien.h"

Alien::Alien(sf::Vector2f location, SI* si, AlienType type) :  ScreenEntity(Size(), si), fType(type){
	this->fMovePixels = 10;
	this->fSize = Size(24, 17, location);
	this->fBulletFactory = new BulletFactory(this->fSI);
}


void Alien::move(util::Direction direction){
	bool success =  util::move(this->fSize, direction, this->fMovePixels);
	if(this->fTickTock == 0){
		this->fTickTock = 1;
	}else if(this->fTickTock == 1){
		this->fTickTock = 0;
	}
}

void Alien::shoot(){
	sf::Vector2f bulletLocation(this->fSize.getGrabPoint().x + (this->fSize.getWidth()/2), this->fSize.getGrabPoint().y + this->fSize.getHeight());
	this->fBulletFactory->createAlienBullet(bulletLocation,  this);
	this->fSI->controller->screen->redraw();
}

Alien::~Alien() {
	delete this->fBulletFactory;
}

