/*
 * Game.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <list>
#include <memory>

#include "libraries/Model.h"
#include "libraries/Controller.h"
#include "libraries/View.h"
#include "libraries/Factory.h"

#include "controllers/EventController.h"
#include "controllers/MotionCOntroller.h"
#include "controllers/ScreenController.h"

#include "factories/GunFactory.h"

#include "models/Gun.h"
#include "views/GunView.h"

class Game {
public:
	Game(int level);

	/*
	 * @brief generate all the needed stuff
	 */
	void build();

	void run();

	virtual ~Game();
private:
	std::list<View*> views;
	std::list<Model*> models;

	int level;
	int lives;

	int width = 600;
	int height = 800;

	sf::RenderWindow* window = nullptr;
	EventController* eventController = nullptr;
	MotionController* motionController = nullptr;
	ScreenController* screenController = nullptr;
};

#endif /* GAME_H_ */
