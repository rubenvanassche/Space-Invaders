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
	// Set up the Config object
	this->config = std::shared_ptr<Config>(new Config());
	this->config->setScreenSize(&this->width, &this->height);

	// Set up the window
	this->window = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(sf::VideoMode(width, height), "Space Invaders"));
	this->config->setWindow(this->window.get());

	// Set up the motion Controller
	this->motionController = std::shared_ptr<MotionController>(new MotionController(&this->guns, &this->aliens, &this->bullets, this->config.get()));
	this->config->setMotionController(this->motionController.get());

	// Set up the screen controller
	this->screenController = std::shared_ptr<ScreenController>(new ScreenController(&this->views, this->config.get()));
	this->config->setScreenController(this->screenController.get());

	// Set up the Event Controller
	this->eventController = std::shared_ptr<EventController>(new EventController(this->config.get()));
	this->config->setEventController(this->eventController.get());

	// Build the gun
	GunFactory gunFactory(&this->guns, &this->views,this->config.get());
	gunFactory.createBlaster(sf::Vector2f(120, 120));

	// Build Aliens
	AlienFactory alienFactory(&this->aliens, &this->views, this->config.get());
	alienFactory.createRussel(sf::Vector2f(10, 100));
	alienFactory.createRussel(sf::Vector2f(20, 20));
	alienFactory.createRussel(sf::Vector2f(30, 300));
	alienFactory.createRussel(sf::Vector2f(40, 404));
}

void Game::run(){
	this->build();
	this->screenController->redraw();

	sf::Clock clock;
	sf::Time second = sf::seconds(1.0);


	while(this->window->isOpen()){
		// Process events
		sf::Event event;
		while (window->pollEvent(event)){
			this->eventController->record(event);
		}

		if(clock.getElapsedTime() >= second){
			this->motionController->moveAliens();
			clock.restart();
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

