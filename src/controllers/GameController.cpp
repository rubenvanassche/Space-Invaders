/*
 * GameController.cpp
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#include "GameController.h"

void GameController::start(){
	StartScreenView startScreenView(this->fSI->window, this->fSI->model->game);
	this->fSI->view->views->push_back(&startScreenView);

	this->fSI->controller->screen->redraw();

	while(this->fSI->window->isOpen()){
		//Process events
		sf::Event event;
		while (this->fSI->window->pollEvent(event)){
			this->fSI->controller->event->startScreen(event);
		}

		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.1));
	}
}

void GameController::startGame(){
	// Remove the startscreen View
	this->fSI->view->views->clear();

	// Build the game
	this->buildGame();

	sf::Clock clock;
	sf::Clock clock2;

	while(this->fSI->window->isOpen()){
		//Process events
		sf::Event event;
		while (this->fSI->window->pollEvent(event)){
			this->fSI->controller->event->record(event);
		}

		if(clock.getElapsedTime() >= sf::seconds(0.5)){
			this->fSI->controller->motion->moveAliens();
			clock.restart();
		}

		if(clock2.getElapsedTime() >= sf::seconds(0.01)){
			this->fSI->controller->motion->moveBullets();
			clock2.restart();
		}

		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.1));
	}
}

void GameController::buildGame(){
	// Build the gun
	this->fSI->factory->gun->createBlaster();

	// Build the wall's
	float wallSpace = (this->fSI->model->game->getWidth() - 4*44)/5;
	this->fSI->factory->wall->createWall(sf::Vector2f(wallSpace*1, 300));
	this->fSI->factory->wall->createWall(sf::Vector2f(wallSpace*2 + 44, 300));
	this->fSI->factory->wall->createWall(sf::Vector2f(wallSpace*3 + 44*2, 300));
	this->fSI->factory->wall->createWall(sf::Vector2f(wallSpace*4 + 44*3, 300));


	// Build Aliens
	this->fSI->factory->alien->createRussel(sf::Vector2f(50, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(90, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(130, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(170, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(210, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(250, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(290, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(330, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(370, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(410, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(450, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(490, 20));
	this->fSI->factory->alien->createRussel(sf::Vector2f(530, 20));

	this->fSI->factory->alien->createRussel(sf::Vector2f(50, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(90, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(130, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(170, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(210, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(250, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(290, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(330, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(370, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(410, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(450, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(490, 60));
	this->fSI->factory->alien->createRussel(sf::Vector2f(530, 60));

	this->fSI->factory->alien->createRussel(sf::Vector2f(50, 100));
	this->fSI->factory->alien->createRussel(sf::Vector2f(90, 100));
	this->fSI->factory->alien->createRussel(sf::Vector2f(130, 100));

}


GameController::~GameController() {
	// TODO Auto-generated destructor stub
}

