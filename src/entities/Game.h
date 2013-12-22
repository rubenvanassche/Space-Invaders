/*
 * Game.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef GAME_H_
#define GAME_H_

#include "../libraries/Entity.h"
#include "../controllers/GameController.h"
#include "../libraries/SI.h"

class Game : public Entity {
public:
	Game(SI* si) : Entity(si){};

	int getWidth(){return this->fScreenWidth;};

	int getHeight(){return this->fScreenHeight;};

	void raiseLevel();

	void lowerLevel();

	void kill();

	bool isDead();

	int getLevel(){return this->fLevel;};

	virtual ~Game();
private:
	int fLevel = 1;
	int fLifes = 3;

	int fScreenWidth = 600;
	int fScreenHeight = 400;
};

#endif /* GAME_H_ */
