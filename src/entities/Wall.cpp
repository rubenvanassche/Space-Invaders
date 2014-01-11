/**
 * Wall.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "Wall.h"

Wall::Wall(sf::Vector2f location, SI* si) : ScreenEntity(Size(), si){
	this->fLifes = 3;
	this->fSize = Size(44, 32, location);
}

Wall::~Wall() {
	// TODO Auto-generated destructor stub
}


