/*
 * GunFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunFactory.h"

void GunFactory::createBlaster(sf::Vector2f location){
	std::shared_ptr<Gun> gunPtr(new Gun(location, 10));
	this->fModels->push_back(gunPtr.get());

	std::shared_ptr<GunView> gunViewPtr(new GunView(this->fWindow, gunPtr.get()));
	this->fViews->push_back(gunViewPtr.get());

	// append the view to the model
	gunPtr->appendView(gunViewPtr.get());
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

