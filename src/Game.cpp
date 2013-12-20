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
	this->window = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(sf::VideoMode(height, width), "Space Invaders"));
	//this->window = windowPtr;

	// Set up the motion Controller
	this->motionController = std::shared_ptr<MotionController>(new MotionController(&this->guns, &this->aliens, &this->bullets));

	// Set up the screen controller
	this->screenController = std::shared_ptr<ScreenController>(new ScreenController(&this->views, this->window.get()));

	// Set up the Event Controller
	this->eventController = std::shared_ptr<EventController>(new EventController(this->screenController.get(), this->motionController.get()));

	// Build the gun
	GunFactory gunFactory(&this->guns, &this->views, this->window.get());
	gunFactory.createBlaster(sf::Vector2f(120, 12));
	gunFactory.createBlaster(sf::Vector2f(12, 12));

	std::cout << this->views.size() << std::endl;
	std::cout << "test" << std::endl;
}

void Game::run(){
	 this->build();
	 this->screenController->redraw();
	 while (this->window->isOpen()){
	        // Process events
	        sf::Event event;
	        while (window->pollEvent(event)){
	            this->eventController->record(event);
	            std::cout << "Event" << std::endl;
	        }

	    }


}


Game::~Game() {
	for(auto it = this->views.begin();it != this->views.end();it++){
		delete (*it);
	}
	for(auto it = this->models.begin();it != this->models.end();it++){
			delete (*it);
		}
	// TODO Auto-generated destructor stub
}

