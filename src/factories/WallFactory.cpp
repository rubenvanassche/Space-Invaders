/*
 * WallFactory.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "WallFactory.h"

void WallFactory::createWall(sf::Vector2f location){
	Wall* wallPtr = new Wall(location, this->fSI);
	this->fSI->model->walls->push_back(wallPtr);

	WallView* wallViewPtr = new WallView(this->fSI->window, this->fSI->assets, wallPtr);
	this->fSI->view->views->push_back(wallViewPtr);

}

WallFactory::~WallFactory() {
	// TODO Auto-generated destructor stub
}

