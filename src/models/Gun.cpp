/*
 * Gun.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Gun.h"

bool Gun::move(util::Direction direction){
	return util::move(this->fLocation, direction, this->fMovePixels);
}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
}

