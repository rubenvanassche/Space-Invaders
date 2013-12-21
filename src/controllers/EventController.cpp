/*
 * EventController.cpp
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#include "EventController.h"


void EventController::record(sf::Event event){
    // Close window : exit
    if (event.type == sf::Event::Closed) {
        this->fConfig->screenController()->closeWindow();
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fConfig->screenController()->closeWindow();
    }

    // Left key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
		this->fConfig->motionController()->moveGun(util::LEFT);
	}

    // Right key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
    	this->fConfig->motionController()->moveGun(util::RIGHT);
	}

    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space){
    	this->fConfig->motionController()->shoot();
    }
}

EventController::~EventController() {
	// TODO Auto-generated destructor stub
}

