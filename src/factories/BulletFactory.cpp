/*
 * BulletFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletFactory.h"

void BulletFactory::createBullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from){
	Bullet* bulletPtr = new Bullet(location, direction, from, this->fSI);
	this->fSI->model->bullets->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, bulletPtr);
	this->fSI->view->views->push_back(bulletViewPtr);
}


BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}

