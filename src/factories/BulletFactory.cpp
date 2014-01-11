/**
 * BulletFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletFactory.h"

void BulletFactory::createBullet(sf::Vector2f location, util::Direction direction, bulletType bt,  ScreenEntity* from){
	Bullet* bulletPtr = new Bullet(location, direction, from, bt, this->fSI);
	this->fSI->model->bullets->push_back(bulletPtr);

	// Determine the speed based upon the speed from the entity who shoots the bullet
	int fromSpeed = from->getSpeed();
	if(bt == HUMAN){
		bulletPtr->setSpeed(fromSpeed);
	}else if(bt == ALIEN){
		bulletPtr->setSpeed(fromSpeed/3);
	}

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, this->fSI->assets, bulletPtr);
	this->fSI->view->views->push_back(bulletViewPtr);

	this->fSI->model->bullets->back()->appendView(bulletViewPtr);
}

void BulletFactory::createHumanBullet(sf::Vector2f location, ScreenEntity* from){
	this->createBullet(location, util::UP, HUMAN, from);
}

void BulletFactory::createAlienBullet(sf::Vector2f location, ScreenEntity* from){
	this->createBullet(location, util::DOWN, ALIEN, from);
}

BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}

