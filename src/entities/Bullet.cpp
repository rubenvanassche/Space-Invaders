/*
 * Bullet.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Bullet.h"

Bullet::Bullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from, SI* si) : fDirection(direction), fFrom(from) ,  ScreenEntity(Size(), si){
	this->fMovePixels = 20;
	this->fSize = Size(6, 12, location);
}

void Bullet::move(util::Direction direction){
	util::move(this->fSize, this->fDirection, this->fMovePixels);
}

bool Bullet::isDead(){
	if(fLifes <= 0){
		// there is still a view corresponding to this entity
		if(this->fEntityView != nullptr){
			for(auto it = this->fSI->view->views->begin();it != this->fSI->view->views->end();it++){
				if((*it)->getEntity() == this){
					// found it, so remove it!
					it++;
					this->fSI->view->views->erase(--it);
					break;
				}
			}

			this->fEntityView = nullptr;
		}

		return true;
	}else{
		return false;
	}
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

