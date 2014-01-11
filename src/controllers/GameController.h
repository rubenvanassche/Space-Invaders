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
#include "../views/GameEndedView.h"
#include "../controllers/ScreenController.h"
#include "../controllers/EventController.h"
#include "../controllers/MotionController.h"
#include "../factories/GunFactory.h"
#include "../factories/BulletFactory.h"
#include "../factories/WallFactory.h"
#include "../factories/AlienFactory.h"
#include "../entities/Game.h"

class StartScreenView;
/*
 * @brief The (main) Controller handling the game
 */
class GameController : public Controller {
public:
	/*
	 * @brief Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	GameController(SI* si) :  Controller(si){};

	/*
	 * @brief Show the startscreen
	 */
	void start();

	/*
	 * @brief Starts the game and builds it up
	 */
	void startGame();

	/*
	 * @brief Show the GameOver or GameWon screen
	 *
	 * @param won Bool to decide if the GameOver(false) or GameWon(true) screen needs to showed
	 */
	void gameEnded(bool won);

	virtual ~GameController();
private:
	/*
	 * @brief Build the game, starts with storing entities in the models and views
	 */
	void buildGame(int level);

	/*
	 * @brief Clears the game, it will erase everything that was stored in the models and views
	 */
	void clear();

	double aliensBulletShootFrequency = 3.0;
};

#endif /* GAMECONTROLLER_H_ */
