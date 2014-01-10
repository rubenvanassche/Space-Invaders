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
	this->buildGame(this->fSI->model->game->getLevel());

	sf::Clock clock;
	sf::Clock clock2;
	sf::Clock clock3;


	while(this->fSI->window->isOpen()){
		//Process events
		sf::Event event;
		while (this->fSI->window->pollEvent(event)){
			this->fSI->controller->event->record(event);
			// to fix bug on linux where the aliens would stop moving because the keyboard was still busy
			break;
		}

		if(clock.getElapsedTime() >= sf::seconds(0.5)){
			this->fSI->controller->motion->moveAliens();
			clock.restart();
		}

		if(clock2.getElapsedTime() >= sf::seconds(0.01)){
			this->fSI->controller->motion->moveBullets();
			clock2.restart();
		}

		if(clock3.getElapsedTime() >= sf::seconds(3.0)){
			this->fSI->controller->motion->shootAlien();
			clock3.restart();
		}

		// Check for if dead
		if(this->fSI->model->guns->front()->isDead()){
			this->gameOver();
		}

		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.001));
	}

}

void GameController::buildGame(int level){
	// Build the gun
	GunFactory gunFactory(this->fSI);
	gunFactory.createBlaster();

	// Build the wall's
	WallFactory wallFactory(this->fSI);
	float wallSpace = (this->fSI->model->game->getWidth() - 4*44)/5;
	wallFactory.createWall(sf::Vector2f(wallSpace*1, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*2 + 44, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*3 + 44*2, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*4 + 44*3, 300));


	// Build Aliens
	AlienFactory alienFactory(this->fSI);
	std::vector<int> alienXLocations = {50, 90, 130, 170, 210, 250, 290, 330, 370, 410, 450, 490, 530};

	for(int i = 0;i < alienXLocations.size();i++){
		alienFactory.createRussel(sf::Vector2f(alienXLocations.at(i), 40));
	}
	for(int i = 0;i < alienXLocations.size();i++){
		alienFactory.createRussel(sf::Vector2f(alienXLocations.at(i), 80));
	}
	for(int i = 0;i < alienXLocations.size();i++){
		alienFactory.createRussel(sf::Vector2f(alienXLocations.at(i), 120));
	}
	for(int i = 0;i < alienXLocations.size();i++){
		alienFactory.createRussel(sf::Vector2f(alienXLocations.at(i), 160));
	}

	// Create the infoview on top of the game
	InfoView* info = new InfoView(this->fSI->window, this->fSI->model->guns->front());
	this->fSI->view->views->push_back(info);
}

void GameController::gameOver(){
	while(this->fSI->window->isOpen()){
		//Process events
		sf::Event event;
		while (this->fSI->window->pollEvent(event)){
			this->fSI->controller->event->startScreen(event);
		}

		GameOverView gameOver(this->fSI->window, this->fSI->model->game);
		this->fSI->view->views->push_back(&gameOver);
		this->fSI->controller->screen->redraw();


		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.1));
	}
}

void GameController::gameWon(){
	while(this->fSI->window->isOpen()){
		//Process events
		sf::Event event;
		while (this->fSI->window->pollEvent(event)){
			this->fSI->controller->event->startScreen(event);
		}

		std::cout << "Game Won" << std::endl;

		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.1));
	}
}


GameController::~GameController() {
	// TODO Auto-generated destructor stub
}

