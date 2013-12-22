/*
 * Alien.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Alien.h"

Alien::Alien(sf::Vector2f location, Config* config) :  Entity(location, config){
	this->fMovePixels = 10;
	this->fSize.set(24, 17);
}

bool Alien::Collusion(Bullet* bullet){

}

void Alien::move(util::Direction direction){
	bool success =  util::move(this->fLocation, direction, this->fMovePixels);
	if(this->fTickTock == 0){
		this->fTickTock = 1;
	}else if(this->fTickTock == 1){
		this->fTickTock = 0;
	}
}

Alien::~Alien() {
	// TODO Auto-generated destructor stub
}

