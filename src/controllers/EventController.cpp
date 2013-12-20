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
        this->fScreenController->closeWindow();
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fScreenController->closeWindow();
    }

    // Left key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
		this->fMotionController->moveGun(util::LEFT);
		std::cout << "LEFT" << std::endl;
		this->fScreenController->redraw();
	}

    // Right key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
    	this->fMotionController->moveGun(util::RIGHT);
    	std::cout << "RIGHT" << std::endl;
    	this->fScreenController->redraw();
	}
}

EventController::~EventController() {
	// TODO Auto-generated destructor stub
}

