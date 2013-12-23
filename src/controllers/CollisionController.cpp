/*
 * CollisionController.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "CollisionController.h"

void CollisionController::check(){
	// Bullets with Walls, Guns, Aliens
	for(auto it = this->fSI->model->bullets->begin();it != this->fSI->model->bullets->end();it++){
		// Cast *Bullet to *ScreenEntity
		ScreenEntity* bullet = dynamic_cast<ScreenEntity*>(*it);
		Size x = bullet->getSize();
		std::cout << x << std::endl;
		// Check for each bullet if it collides with an object
		this->withAlien(bullet);
		//this->withGun(bullet);
		this->withWall(bullet);
	}
}

void CollisionController::withGun(ScreenEntity* entity){
	if(entity->isDead()){
		return;
	}

	for(auto it = this->fSI->model->guns->begin();it != this->fSI->model->guns->end();it++){
		if((*it)->collides(entity) == true){
			std::cout << "Collide with Gun" << std::endl;
			(*it)->kill();
			entity->kill();
			break;
		}
	}
}

void CollisionController::withAlien(ScreenEntity* entity){
	if(entity->isDead()){
		return;
	}

	for(auto it = this->fSI->model->aliens->begin();it != this->fSI->model->aliens->end();it++){
		if((*it)->collides(entity) == true){
			std::cout << "Collide with Alien x:" << (*it)->getLocation().x << " y:" << (*it)->getLocation().y << std::endl;
			(*it)->kill();
			entity->kill();
			break;
		}
	}
}

void CollisionController::withWall(ScreenEntity* entity){
	if(entity->isDead()){
		return;
	}

	for(auto it = this->fSI->model->walls->begin();it != this->fSI->model->walls->end();it++){
		if((*it)->collides(entity) == true){
			std::cout << "Collide with Wall" << std::endl;
			(*it)->kill();
			entity->kill();
			break;
		}
	}
}

CollisionController::~CollisionController() {
	// TODO Auto-generated destructor stub
}

