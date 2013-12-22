/*
 * Game.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GAME_H_
#define GAME_H_
/*
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <list>
#include <vector>
#include <memory>
#include <iostream>

#include "libraries/Entity.h"
#include "libraries/Controller.h"
#include "libraries/View.h"
#include "libraries/Factory.h"
#include "libraries/Config.h"

#include "controllers/EventController.h"
#include "controllers/MotionCOntroller.h"
#include "controllers/ScreenController.h"

#include "factories/GunFactory.h"
#include "factories/AlienFactory.h"
#include "factories/WallFactory.h"

#include "views/StartScreenView.h"

class Game {
public:
	Game(int level);

	void build();

	void run();

	void startGame();

	int getWidth(){return this->width;};

	int getHeight(){return this->height;};

	void setLevel(int flevel){this->level = flevel;};

	int getLevel(){return this->level;};

	virtual ~Game();
private:
	std::list<View*> views;
	std::list<Entity*> models;
	std::list<Entity*> guns;
	std::list<Entity*> aliens;
	std::list<Entity*> walls;
	std::list<Entity*> bullets;

	int level;
	int lifes;

	int width = 600;
	int height = 400;

	bool startScreen = true;

	std::shared_ptr<sf::RenderWindow> window;
	std::shared_ptr<EventController> eventController;
	std::shared_ptr<MotionController> motionController;
	std::shared_ptr<ScreenController> screenController;
	std::shared_ptr<Config> config;
};
*/
#endif /* GAME_H_ */

