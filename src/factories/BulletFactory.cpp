/*
 * BulletFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "BulletFactory.h"

void BulletFactory::createBullet(sf::Vector2f location, util::Direction direction, bulletType bt,  ScreenEntity* from){
	Bullet* bulletPtr = new Bullet(location, direction, from, bt, this->fSI);
	this->fSI->model->bullets->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, bulletPtr);
	this->fSI->view->views->push_back(bulletViewPtr);
}

void BulletFactory::createHumanBullet(sf::Vector2f location, ScreenEntity* from){
	Bullet* bulletPtr = new Bullet(location, util::UP, from, HUMAN, this->fSI);
	this->fSI->model->bullets->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, bulletPtr);
	this->fSI->view->views->push_back(bulletViewPtr);
}

void BulletFactory::createAlienBullet(sf::Vector2f location, ScreenEntity* from){
	Bullet* bulletPtr = new Bullet(location, util::DOWN, from, ALIEN, this->fSI);
	bulletPtr->setSpeed(2);
	this->fSI->model->bullets->push_back(bulletPtr);

	BulletView* bulletViewPtr = new BulletView(this->fSI->window, bulletPtr);
	this->fSI->view->views->push_back(bulletViewPtr);
}

BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}

