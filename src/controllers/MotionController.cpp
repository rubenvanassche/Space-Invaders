/*
 * MotionController.cpp
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#include "MotionController.h"

void MotionController::moveGun(util::Direction direction){
	if(direction == util::UP or direction == util::DOWN){
		std::runtime_error("Can't move the Gun up or Down only left and right");
	}

	if(this->fGuns->size() == 0){
		return;
	}

	this->fGuns->front()->move(direction);
}

void MotionController::moveAliens(){
	if(this->fAliens->size() == 0){
		return;
	}

	Entity* mostLeft = *this->fAliens->begin();
	Entity* mostRight = *this->fAliens->begin();

	for(auto it = this->fAliens->begin();it != this->fAliens->end();it++){
		if((*it)->isDead() == true){
			// We're not working with dead Aliens so skip this one
			continue;
		}


		if((*it)->getLocation().x < mostLeft->getLocation().x){
			// If our current it's X is smaller then our temp most left, change it
				mostLeft = *it;
		}

		if((*it)->getLocation().x > mostRight->getLocation().x){
			// If our current it's X is bigger then our temp most right, change it
			mostRight = *it;
		}
	}

	if(mostLeft->isDead() == true and mostRight->isDead() == true){
		// All our Aliens are dead, so stop here
		return;
	}

	// Now let's determine the movement of those Aliens
	util::Direction direction = this->fAlienDirection;

	int Lx = mostLeft->move(mostLeft->getLocation().x, util::LEFT);
	if(Lx < 5){
		// The calculated new X value of the most Left Alien is smaller then 5 so do not turn to right but turn left
		if(this->fAlienWentDown == false){
			direction = util::DOWN;
			this->fAlienWentDown = true;
		}else{
			direction = util::RIGHT;
			this->fAlienDirection = util::RIGHT;
			this->fAlienWentDown = false;
		}
	}

	int Lr = mostRight->move(mostRight->getLocation().x, util::RIGHT);
	int maxWidth = this->fConfig->screenWidth() - mostRight->getSize().getWidth() - 5;
	if(Lr > maxWidth){
		if(this->fAlienWentDown == false){
			direction = util::DOWN;
			this->fAlienWentDown = true;
		}else{
			direction = util::LEFT;
			this->fAlienDirection = util::LEFT;
			this->fAlienWentDown = false;
		}
	}

	// Now let's move those aliens
	for(auto it = this->fAliens->begin();it != this->fAliens->end();it++){
		(*it)->move(direction);
	}

	this->fConfig->screenController()->redraw();
}

void MotionController::moveBullets(){
	if(this->fBullets->size() == 0){
		return;
	}

	for(auto it = this->fBullets->begin();it != this->fBullets->end();it++){
		if((*it)->getLocation().y < 0 or (*it)->getLocation().y > this->fConfig->screenHeight()){
			// Bullet is of the screen so remove this one
			this->fBullets->remove(*it);
			/*
			 * TODO: Add a function to remove the view, can't be done now because we don't have a pointer from model to view
			 */
			continue;
		}

		(*it)->move(util::UP);
	}

	this->fConfig->screenController()->redraw();
}

void MotionController::shoot(){
	if(this->fGuns->size() == 0){
		return;
	}

	this->fGuns->front()->shoot();
}

MotionController::~MotionController() {
	// TODO Auto-generated destructor stub
}

