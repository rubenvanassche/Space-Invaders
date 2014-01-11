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

/*
 * @brief An Entity representing the Game, only one should be made
 */
class Game : public Entity {
public:
	/*
	 * @brief The Game Entity Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	Game(SI* si) : Entity(si){};

	/*
	 * @brief get the width of the game
	 *
	 * @return An int containing the width
	 */
	int getWidth(){return this->fScreenWidth;};

	/*
	 * @brief get the height of the game
	 *
	 * @return An int containing the height
	 */
	int getHeight(){return this->fScreenHeight;};

	/*
	 * @brief get the level of the game
	 *
	 * @param An int representing the level the player is right now
	 */
	int getLevel(){return this->fLevel;};

	/*
	 * @brief raise the level of the game
	 */
	void raiseLevel();

	/*
	 * @brief lower the level of the game
	 */
	void lowerLevel();

	virtual ~Game();
private:
	int fLevel = 1;

	int fScreenWidth = 600;
	int fScreenHeight = 400;
};

#endif /* GAME_H_ */
