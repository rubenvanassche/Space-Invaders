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
#include "../views/StartScreenView.h"
#include "../controllers/ScreenController.h"
#include "../controllers/EventController.h"
#include "../controllers/MotionController.h"
#include "../factories/Gunfactory.h"
#include "../factories/BulletFactory.h"
#include "../factories/WallFactory.h"
#include "../factories/AlienFactory.h"

class StartScreenView;

class GameController : public Controller {
public:
	GameController(SI* si) : Controller(si){};
	int srceenWidth(){return this->width;};
	int screenHeight(){return this->height;};
	void start();
	void startGame();
	void buildGame();

	int getWidth(){return this->width;};

	int getHeight(){return this->height;};

	void setLevel(int flevel){this->level = flevel;};

	int getLevel(){return this->level;};

	virtual ~GameController();

	int level = 1;
	int lifes = 3;

	int width = 600;
	int height = 400;

	bool startScreen = true;
};

#endif /* GAMECONTROLLER_H_ */
