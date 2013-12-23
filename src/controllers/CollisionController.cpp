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
		//ScreenEntity* bullet = dynamic_cast<ScreenEntity*>(*it);
		// Check for each bullet if it collides with an object

		this->bulletWithAlien(*it);
		this->bulletWithGun(*it);
		this->bulletWithWall(*it);
	}
}

void CollisionController::bulletWithGun(Bullet* bullet){
	if(bullet->isDead()){
		return;
	}

	if(bullet->getType() == HUMAN){
		return;
	}

	for(auto it = this->fSI->model->guns->begin();it != this->fSI->model->guns->end();it++){
		if((*it)->collides(bullet) == true){
			// raise the score from the shooter
			bullet->getFiredfrom()->raiseScore(10);
			// kill the gun
			(*it)->kill();
			// kill the bullet
			bullet->kill();
			break;
		}
	}
}

void CollisionController::bulletWithAlien(Bullet* bullet){
	if(bullet->isDead()){
		return;
	}

	if(bullet->getType() == ALIEN){
		return;
	}

	for(auto it = this->fSI->model->aliens->begin();it != this->fSI->model->aliens->end();it++){
		if((*it)->collides(bullet) == true){
			// raise the score from the shooter
			bullet->getFiredfrom()->raiseScore(10);
			// kill the alien
			(*it)->kill();
			// kill the bullet
			bullet->kill();
			break;
		}
	}
}

void CollisionController::bulletWithWall(Bullet* bullet){
	if(bullet->isDead()){
		return;
	}

	for(auto it = this->fSI->model->walls->begin();it != this->fSI->model->walls->end();it++){
		if((*it)->collides(bullet) == true){
			// raise the score from the shooter
			bullet->getFiredfrom()->raiseScore(5);
			// kill the wall
			(*it)->kill();
			// kill the alien
			bullet->kill();
			break;
		}
	}
}

CollisionController::~CollisionController() {
	// TODO Auto-generated destructor stub
}

