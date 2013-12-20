/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(sf::Vector2f location){
	Gun* gunPtr = new Gun(location, 10);
	this->fModels->push_back(gunPtr);

	GunView* gunViewPtr = new GunView(this->fWindow, gunPtr);
	this->fViews->push_back(gunViewPtr);

	// append the view to the model
	gunPtr->appendView(gunViewPtr);
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

