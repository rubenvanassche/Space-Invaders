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
	return util::move(this->fLocation, direction, this->fMovePixels);
}

Alien::~Alien() {
	// TODO Auto-generated destructor stub
}

