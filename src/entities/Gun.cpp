/*
 * Gun.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Gun.h"

Gun::Gun(sf::Vector2f location, int scale, SI* si) : fScale(scale), ScreenEntity(Size(), si){
	this->fSize = Size(4*scale, 2*scale, location);
	this->fMovePixels = 10;
	this->fBulletFactory = new BulletFactory(this->fSI);
}

void Gun::move(util::Direction direction){
	if(direction == util::LEFT){
		sf::Vector2f vector = this->fSize.getGrabPoint();
		vector.x -= this->fMovePixels;
		if(vector.x < 0){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fSize.set(vector);
		}
	}else if(direction == util::RIGHT){
		sf::Vector2f vector = this->fSize.getGrabPoint();
		vector.x += this->fMovePixels;
		int maxWidth = this->fSI->model->game->getWidth() - this->fSize.getWidth();
		if(vector.x > maxWidth){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fSize.set(vector);
		}
	}

	this->fSI->controller->screen->redraw();
}

void Gun::shoot(){
	sf::Vector2f bulletLocation(this->fSize.getGrabPoint().x + (this->fSize.getWidth()/2), this->fSize.getGrabPoint().y);
	this->fBulletFactory->createBullet(bulletLocation, util::UP, this);
	this->fSI->controller->screen->redraw();
}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
	delete this->fBulletFactory;
}

