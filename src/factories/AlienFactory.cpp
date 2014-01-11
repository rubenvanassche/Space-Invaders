/**
 * AlienFactory.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienFactory.h"

void AlienFactory::createRussel(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI, RUSSEL);
	this->fSI->model->aliens->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, this->fSI->assets, alienPtr);
	this->fSI->view->views->push_back(alienViewPtr);

	alienPtr->appendView(alienViewPtr);
}

void AlienFactory::createCarl(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI, CARL);
	this->fSI->model->aliens->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, this->fSI->assets, alienPtr);
	this->fSI->view->views->push_back(alienViewPtr);

	alienPtr->appendView(alienViewPtr);
}

void AlienFactory::createMuntz(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI, MUNTZ);
	this->fSI->model->aliens->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, this->fSI->assets, alienPtr);
	this->fSI->view->views->push_back(alienViewPtr);

	// Change the speed
	alienPtr->setSpeed(6);

	alienPtr->appendView(alienViewPtr);
}

void AlienFactory::createDoug(sf::Vector2f location){
	Alien* alienPtr = new Alien(location, this->fSI, DOUG);
	this->fSI->model->aliens->push_back(alienPtr);

	AlienView* alienViewPtr = new AlienView(this->fSI->window, this->fSI->assets, alienPtr);
	this->fSI->view->views->push_back(alienViewPtr);

	alienPtr->appendView(alienViewPtr);
}

AlienFactory::~AlienFactory() {
	// TODO Auto-generated destructor stub
}
