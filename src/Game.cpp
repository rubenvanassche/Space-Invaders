/*
 * Game.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Game.h"

Game::Game(int level){
	this->level = level;
	this->lives = 3;
}

void Game::build(){
	// Set up the window
	std::auto_ptr<sf::RenderWindow> windowPtr(new sf::RenderWindow(sf::VideoMode(height, width), "Space Invaders"));
	this->window = windowPtr.get();

	// Set up the motion Controller
	std::auto_ptr<MotionController> motionControllerPtr(new MotionController(&this->models, &this->views));
	this->motionController = motionControllerPtr.get();

	// Set up the Event Controller
	std::auto_ptr<EventController> eventControllerPtr(new EventController(&this->models, &this->views, this->screenController, this->motionController));
	this->eventController = eventControllerPtr.get();

	// Build the gun
	GunFactory gunFactory(&this->models, &this->views, this->window);
	gunFactory.createBlaster(sf::Vector2f(12, 12));
}

void Game::run(){
	this->build();
	 while (this->window->isOpen())
	    {
	        // Process events
	        sf::Event event;
	        while (window->pollEvent(event)){
	            this->eventController->record(event);
	        }

	        // Clear screen
	        window->clear();


	        // Update the window
	        window->display();
	    }
}


Game::~Game() {
	// TODO Auto-generated destructor stub
}

