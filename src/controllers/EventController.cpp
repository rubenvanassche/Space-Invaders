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

int EventController::startScreen(sf::Event event){
    // Close window : exit
    if (event.type == sf::Event::Closed) {
        this->fConfig->screenController()->closeWindow();
        return 0;
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fConfig->screenController()->closeWindow();
        return 0;
    }

    // Space key pressed : start Game
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space){
    	return 1;
    }

    // Space key pressed : lower level
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
    	return 2;
    }

    // Space key pressed : raise level
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
    	return 3;
    }

    return 0;
}

EventController::~EventController() {
	// TODO Auto-generated destructor stub
}

