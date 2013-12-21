/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(sf::Vector2f location){
	Gun* gunPtr = new Gun(location, 10, this->fConfig);
	this->fModels->push_back(gunPtr);

	GunView* gunViewPtr = new GunView(this->fConfig->window(), gunPtr);
	this->fViews->push_back(gunViewPtr);
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

