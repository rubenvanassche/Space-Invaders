/*
 * Bullet.cpp
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#include "Bullet.h"

Bullet::Bullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from, bulletType bullettype, SI* si) : fDirection(direction), fFrom(from) ,  ScreenEntity(Size(), si){
	this->fMovePixels = 10;
	this->fSize = Size(6, 12, location);
	this->fType = bullettype;
}

void Bullet::move(util::Direction direction){
	util::move(this->fSize, this->fDirection, this->fMovePixels);
}


void Bullet::kill(bool forced){
	if(forced == true){
		this->fLifes = 0;
	}

	if(this->isDead()){
		// there is still a view corresponding to this entity
		if(this->fEntityView != nullptr){
			for(auto it = this->fSI->view->views->begin();it != this->fSI->view->views->end();it++){
				if((*it)->getEntity() == this){
					// found it, so remove it!
					delete *it;
					this->fSI->view->views->remove(*it);
					//break;
				}
			}

			this->fEntityView = nullptr;
		}

		return;
	}

	this->fLifes -= 1;
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

