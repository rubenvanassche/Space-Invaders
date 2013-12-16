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

#include "factories/GunFactory.h"

#include "controllers/GunController.h"
#include "models/Gun.h"
#include "views/GunView.h"

class Game {
public:
	Game(int level);
	void run();
	virtual ~Game();
private:
	void buildGuns();
	void buildAliens();

	std::list<View*> views;
	std::list<Controller*> controllers;
	std::list<Model*> models;

	int level;

	int width = 600;
	int height = 800;

	std::shared_ptr<sf::RenderWindow> window;
};

#endif /* GAME_H_ */
