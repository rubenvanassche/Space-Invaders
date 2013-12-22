/*
 * AlienFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienFactory.h"

void AlienFactory::createRussel(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI);
	this->fEntities->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, alienPtr);
	this->fViews->push_back(alienViewPtr);
}

AlienFactory::~AlienFactory() {
	// TODO Auto-generated destructor stub
}

