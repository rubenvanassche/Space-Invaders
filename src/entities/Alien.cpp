/*
 * Alien.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Alien.h"

Alien::Alien(sf::Vector2f location, SI* si) :  ScreenEntity(Size(), si){
	this->fMovePixels = 10;
	this->fSize = Size(24, 17, location);
}


void Alien::move(util::Direction direction){
	bool success =  util::move(this->fSize, direction, this->fMovePixels);
	if(this->fTickTock == 0){
		this->fTickTock = 1;
	}else if(this->fTickTock == 1){
		this->fTickTock = 0;
	}
}

Alien::~Alien() {
	// TODO Auto-generated destructor stub
}

