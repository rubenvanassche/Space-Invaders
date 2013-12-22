/*
 * Gun.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Gun.h"

Gun::Gun(sf::Vector2f location, int scale, SI* si) : fScale(scale), ScreenEntity(location, si){
	this->fSize.set(4*scale, 2*scale);
	this->fMovePixels = 10;
	this->fBulletFactory = new BulletFactory(this->fSI->model->bullets, this->fSI->view->views, this->fSI);
}

void Gun::move(util::Direction direction){
	if(direction == util::LEFT){
		int x = this->fLocation.x;
		x -= this->fMovePixels;
		if(x < 0){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fLocation.x = x;
		}
	}else if(direction == util::RIGHT){
		int x = this->fLocation.x;
		x += this->fMovePixels;
		int maxWidth = this->fSI->model->game->getWidth() - this->fSize.getWidth();
		if(x > maxWidth){
			// Gun get's to close to border so do not change the value
			return;
		}else{
			this->fLocation.x = x;
		}
	}

	this->fSI->controller->screen->redraw();
}

void Gun::shoot(){
	sf::Vector2f bulletLocation(this->fLocation.x + (this->fSize.getWidth()/2), this->fLocation.y);
	this->fBulletFactory->createBullet(bulletLocation, util::UP);
	this->fSI->controller->screen->redraw();
}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
	delete this->fBulletFactory;
}

