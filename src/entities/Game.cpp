/*
 * Game.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "Game.h"

void Game::kill(){
	if(this->isDead()){
		// We're death so tell the EventCOntroller

		return;
	}

	// We've got still some lifes so continue killing
	this->fLifes -= 1;
}

bool Game::isDead(){
	if(this->fLifes == 0){
		return true;
	}else{
		return false;
	}
}

void Game::raiseLevel(){
	if(this->fLevel < 50){
		this->fLevel += 1;
		this->fSI->controller->screen->redraw();
	}
}

void Game::lowerLevel(){
	if(this->fLevel > 1){
		this->fLevel -= 1;
		this->fSI->controller->screen->redraw();
	}
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

