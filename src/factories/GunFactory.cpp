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
	this->fSI->model->guns->push_back(gunPtr);

	GunView* gunViewPtr = new GunView(this->fSI->window, gunPtr);
	this->fSI->view->views->push_back(gunViewPtr);

	// Now let's center this Gun
	location.x = (this->fSI->model->game->getWidth() - gunPtr->getSize().getWidth())/2;
	location.y = this->fSI->model->game->getHeight() - gunPtr->getSize().getHeight();
	gunPtr->move(location);
}

GunFactory::~GunFactory() {
	// TODO Auto-generated destructor stub
}

