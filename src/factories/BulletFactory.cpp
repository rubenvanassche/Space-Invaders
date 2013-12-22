/*
 * BulletFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletFactory.h"

void BulletFactory::createBullet(sf::Vector2f location, util::Direction direction){
	Bullet* bulletPtr = new Bullet(location, direction, this->fSI);
	this->fEntities->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, bulletPtr);
	this->fViews->push_back(bulletViewPtr);
}


BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}

