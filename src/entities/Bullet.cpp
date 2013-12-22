/*
 * Bullet.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Bullet.h"

void Bullet::move(util::Direction direction){
	util::move(this->fLocation, this->fDirection, this->fMovePixels);
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

