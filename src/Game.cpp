/*
 * Game.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */
/*
#include "Game.h"

Game::Game(int level){
	this->level = level;
	this->lifes = 3;

	// Set up the Config object
	this->config = std::shared_ptr<Config>(new Config());
	this->config->setScreenSize(&this->width, &this->height);
	this->config->setBullets(&this->bullets);
	this->config->setViews(&this->views);

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
}

void Game::build(){
	// Build the gun
	GunFactory gunFactory(&this->guns, &this->views,this->config.get());
	gunFactory.createBlaster();

	// Build the wall's
	WallFactory wallFactory(&this->walls, &this->views, this->config.get());
	float wallSpace = (this->config->screenWidth() - 4*44)/5;
	wallFactory.createWall(sf::Vector2f(wallSpace*1, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*2 + 44, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*3 + 44*2, 300));
	wallFactory.createWall(sf::Vector2f(wallSpace*4 + 44*3, 300));

	// Build Aliens
	AlienFactory alienFactory(&this->aliens, &this->views, this->config.get());
	alienFactory.createRussel(sf::Vector2f(50, 20));
	alienFactory.createRussel(sf::Vector2f(90, 20));
	alienFactory.createRussel(sf::Vector2f(130, 20));
	alienFactory.createRussel(sf::Vector2f(170, 20));
	alienFactory.createRussel(sf::Vector2f(210, 20));
	alienFactory.createRussel(sf::Vector2f(250, 20));
	alienFactory.createRussel(sf::Vector2f(290, 20));
	alienFactory.createRussel(sf::Vector2f(330, 20));
	alienFactory.createRussel(sf::Vector2f(370, 20));
	alienFactory.createRussel(sf::Vector2f(410, 20));
	alienFactory.createRussel(sf::Vector2f(450, 20));
	alienFactory.createRussel(sf::Vector2f(490, 20));
	alienFactory.createRussel(sf::Vector2f(530, 20));

	alienFactory.createRussel(sf::Vector2f(50, 60));
	alienFactory.createRussel(sf::Vector2f(90, 60));
	alienFactory.createRussel(sf::Vector2f(130, 60));
	alienFactory.createRussel(sf::Vector2f(170, 60));
	alienFactory.createRussel(sf::Vector2f(210, 60));
	alienFactory.createRussel(sf::Vector2f(250, 60));
	alienFactory.createRussel(sf::Vector2f(290, 60));
	alienFactory.createRussel(sf::Vector2f(330, 60));
	alienFactory.createRussel(sf::Vector2f(370, 60));
	alienFactory.createRussel(sf::Vector2f(410, 60));
	alienFactory.createRussel(sf::Vector2f(450, 60));
	alienFactory.createRussel(sf::Vector2f(490, 60));
	alienFactory.createRussel(sf::Vector2f(530, 60));

	alienFactory.createRussel(sf::Vector2f(50, 100));
	alienFactory.createRussel(sf::Vector2f(90, 100));
	alienFactory.createRussel(sf::Vector2f(130, 100));

	// 13 naast elkaar
	// 5 roten onder elkaar
}

void Game::run(){
	sf::Clock clock;
	sf::Clock clock2;

	StartScreenView startScreenView(this->config->window(), this);
	this->views.push_back(&startScreenView);

	this->config->screenController()->redraw();

	while(this->window->isOpen()){
		if(startScreen == true){
			//Process events
			sf::Event event;
			while (window->pollEvent(event)){
				int eventCode = this->eventController->startScreen(event);
				if(eventCode == 1){
					// Start Game
					this->startGame();
				}else if(eventCode == 2){
					if(level > 1){
						this->level -= 1;
						this->config->screenController()->redraw();
					}
				}else if(eventCode == 3){
					this->level += 1;
					this->config->screenController()->redraw();
				}else{

				}
			}
		}else{
			//Process events
			sf::Event event;
			while (window->pollEvent(event)){
				this->eventController->record(event);
			}

			if(clock.getElapsedTime() >= sf::seconds(0.5)){
				this->motionController->moveAliens();
				clock.restart();
			}

			if(clock2.getElapsedTime() >= sf::seconds(0.01)){
				this->motionController->moveBullets();
				clock2.restart();
			}
		}

		// Sleep for a while so our while loop doesn't go crazy on the CPU
		sf::sleep(sf::seconds(0.1));
	}


}

void Game::startGame(){
	this->views.clear();
	this->build();
	this->startScreen = false;
}


Game::~Game() {
	for(auto it = this->views.begin();it != this->views.end();it++){
		delete (*it);
	}
	for(auto it = this->guns.begin();it != this->guns.end();it++){
			delete (*it);
	}
	for(auto it = this->aliens.begin();it != this->aliens.end();it++){
			delete (*it);
	}
	// TODO Auto-generated destructor stub
}
*/

