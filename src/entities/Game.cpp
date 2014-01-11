/**
 * Game.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "Game.h"


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

