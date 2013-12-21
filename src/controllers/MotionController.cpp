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
		std::runtime_error("No gun avaible to move");
	}

	this->fGuns->front()->move(direction);
}

void MotionController::moveAliens(){

}

void MotionController::shoot(){

}

MotionController::~MotionController() {
	// TODO Auto-generated destructor stub
}

