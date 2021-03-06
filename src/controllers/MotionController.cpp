/**
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


	if(this->fSI->model->guns->size() == 0){
		return;
	}

	this->fSI->model->guns->front()->move(direction);
}

void MotionController::moveAliens(){
	if(this->fSI->model->aliens->size() == 0){
		return;
	}

	ScreenEntity* mostLeft = *this->fSI->model->aliens->rbegin();
	ScreenEntity* mostRight = *this->fSI->model->aliens->begin();

	std::list<Alien*>::iterator it =  this->fSI->model->aliens->begin();
	std::list<Alien*>::reverse_iterator rIt = this->fSI->model->aliens->rbegin();

	while(it != this->fSI->model->aliens->end() and rIt  != this->fSI->model->aliens->rend()){
		if((*it)->isDead() == true){
			// We're not working with dead Aliens so skip this one
			rIt++;
			it++;
			continue;
		}

		if((*it)->getLocation().x > mostRight->getLocation().x){
			// If our current it's X is bigger then our temp most right, change it
			mostRight = *it;
		}

		if((*it)->getLocation().x < mostLeft->getLocation().x){
			// If our current it's X is smaller then our temp most left, change it
			mostLeft = *it;
		}

		rIt++;
		it++;
	}

	if(mostLeft->isDead() == true and mostRight->isDead() == true){
		// All our Aliens are dead, so stop here
		this->fSI->controller->game->gameEnded(true);
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
	int maxWidth = this->fSI->model->game->getWidth() - mostRight->getSize().getWidth() - 5;
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
	for(auto it =  this->fSI->model->aliens->begin();it != this->fSI->model->aliens->end();it++){
		(*it)->move(direction);
	}

	this->fSI->controller->screen->redraw();
}

void MotionController::moveBullets(){
	if(this->fSI->model->bullets->size() == 0){
		return;
	}

	for(auto it = this->fSI->model->bullets->begin();it != this->fSI->model->bullets->end();it++){
		if((*it)->getLocation().y < 0 or (*it)->getLocation().y > this->fSI->model->game->getHeight()){
			// Bullet is of the screen so remove this one
			(*it)->kill(true);
			//this->fSI->model->bullets->erase(it++);
			continue;
		}

		(*it)->move(util::UP);
	}

	this->fSI->controller->collision->check();

	this->fSI->controller->screen->redraw();

}

void MotionController::shootGun(){
	if(this->fSI->model->guns->size() == 0){
		return;
	}

	this->fSI->model->guns->front()->shoot();
}

void MotionController::shootAlien(){
	std::random_device rd;
	std::default_random_engine re(rd());
	std::uniform_int_distribution<int> uniform_dist(1, 10);
	for(auto it = this->fSI->model->aliens->begin();it != this->fSI->model->aliens->end();it++){
		if((*it)->isDead()){
			continue;
		}

		int random = uniform_dist(re);
		if(random == 1){
			// Shoot!!!
			(*it)->shoot();
			break;
		}
	}
}

MotionController::~MotionController() {
	// TODO Auto-generated destructor stub
}

