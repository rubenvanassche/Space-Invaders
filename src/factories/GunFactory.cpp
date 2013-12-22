/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(){
	sf::Vector2f location(0,0);
	Gun* gunPtr = new Gun(location, 12, this->fConfig);
	this->fEntities->push_back(gunPtr);

	GunView* gunViewPtr = new GunView(this->fConfig->window(), gunPtr);
	this->fViews->push_back(gunViewPtr);

	// Now let's center this Gun
	location.x = (this->fConfig->screenWidth() - gunPtr->getSize().getWidth())/2;
	location.y = this->fConfig->screenHeight() - gunPtr->getSize().getHeight();
	gunPtr->move(location);
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

