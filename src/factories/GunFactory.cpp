/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(){
	std::shared_ptr<Gun> gunPtr(new Gun(sf::Vector2f(0, 0), 10));
	std::shared_ptr<GunView> gunViewPtr(new GunView(gunPtr.get()));

	this->fViews->push_back(gunViewPtr.get());
	this->fModels->push_back(gunPtr.get());
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

