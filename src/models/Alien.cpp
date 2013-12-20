/*
 * Alien.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Alien.h"


bool Alien::Collusion(Bullet bullet){

}

bool Alien::move(util::Direction direction){
	bool success =  util::move(this->fLocation, direction, this->fMovePixels);
	this->fView->draw();
	return success;
}

Alien::~Alien() {
	// TODO Auto-generated destructor stub
}

