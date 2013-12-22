/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(){
	sf::Vector2f location(0,0);
	Gun* gunPtr = new Gun(location, 12, this->fSI);
	this->fEntities->push_back(gunPtr);

	GunView* gunViewPtr = new GunView(this->fSI->window, gunPtr);
	this->fViews->push_back(gunViewPtr);

	// Now let's center this Gun
	location.x = (this->fSI->controller->game->srceenWidth() - gunPtr->getSize().getWidth())/2;
	location.y = this->fSI->controller->game->screenHeight() - gunPtr->getSize().getHeight();
	gunPtr->move(location);
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

