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
        this->fSI->controller->screen->closeWindow();
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fSI->controller->screen->closeWindow();
    }

    // Left key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
		this->fSI->controller->motion->moveGun(util::LEFT);
	}

    // Right key pressed : move Gun
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
    	this->fSI->controller->motion->moveGun(util::RIGHT);
	}

    // Space Bar pressed : Shoot Gun
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space){
    	this->fSI->controller->motion->shootGun();
    }
}

void EventController::startScreen(sf::Event event){
    // Close window : exit
    if (event.type == sf::Event::Closed) {
        this->fSI->controller->screen->closeWindow();
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fSI->controller->screen->closeWindow();
    }

    // Space key pressed : start Game
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space){
    	this->fSI->controller->game->startGame();
    }

    // Space key pressed : lower level
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left){
    	this->fSI->model->game->lowerLevel();
    }

    // Space key pressed : raise level
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right){
    	this->fSI->model->game->raiseLevel();
    }
}

void EventController::gameEndScreen(sf::Event event){
    // Close window : exit
    if (event.type == sf::Event::Closed) {
        this->fSI->controller->screen->closeWindow();
    }

    // Escape pressed : exit
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        this->fSI->controller->screen->closeWindow();
    }

    // Space key pressed : start Game
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space){
    	this->fSI->controller->game->start();
    }
}

void EventController::die(){

}

EventController::~EventController() {
	// TODO Auto-generated destructor stub
}

