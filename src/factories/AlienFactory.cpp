/*
 * AlienFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienFactory.h"

void AlienFactory::createRussel(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI);
	this->fSI->model->aliens->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, alienPtr);
	this->fSI->view->views->push_back(alienViewPtr);
}

AlienFactory::~AlienFactory() {
	// TODO Auto-generated destructor stub
}
