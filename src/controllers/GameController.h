/*
 * GameController.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef GAMECONTROLLER_H_
#define GAMECONTROLLER_H_


#include "../libraries/Controller.h"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <thread>
#include <iostream>
#include "../views/StartScreenView.h"
#include "../views/InfoView.h"
#include "../views/GameOverView.h"
#include "../controllers/ScreenController.h"
#include "../controllers/EventController.h"
#include "../controllers/MotionController.h"
#include "../factories/GunFactory.h"
#include "../factories/BulletFactory.h"
#include "../factories/WallFactory.h"
#include "../factories/AlienFactory.h"
#include "../entities/Game.h"

class StartScreenView;

class GameController : public Controller {
public:
	GameController(SI* si) :  Controller(si){};
	void start();
	void startGame();
	void buildGame(int level);
	void gameOver();
	void gameWon();
	virtual ~GameController();
};

#endif /* GAMECONTROLLER_H_ */
