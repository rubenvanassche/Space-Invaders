/*
 * Gun.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Gun.h"

bool Gun::move(Direction direction){
	return this->fLocation.move(direction, this->movePixels);
}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
}

