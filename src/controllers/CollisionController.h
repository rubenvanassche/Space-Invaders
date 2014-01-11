/*
 * CollisionController.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef COLLISIONCONTROLLER_H_
#define COLLISIONCONTROLLER_H_


#include "../libraries/Controller.h"
#include "../libraries/ScreenEntity.h"
#include "../entities/Bullet.h"
#include "../entities/Alien.h"
#include "../entities/Wall.h"
#include "../entities/Gun.h"
#include <iostream>

/*
 * @brief The controller for handling collisions
 */
class CollisionController : public Controller {
public:
	/*
	 * @brief Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	CollisionController(SI* si) : Controller(si){};

	/*
	 * @brief checks if a collision happen if so it will do the appropriate thing. Which is killing the instance or ending the game.
	 */
	void check();

	virtual ~CollisionController();
private:
	/*
	 * @brief Checks if a certain bullet collides with a gun. If so it will kill the wall.
	 *
	 * @param entity The Bullet
	 */
	void bulletWithGun(Bullet* entity);

	/*
	 * @brief Checks if a certain bullet collides with an Alien. If so it will kill the wall.
	 *
	 * @param entity The Bullet
	 */
	void bulletWithAlien(Bullet* entity);

	/*
	 * @brief Checks if a certain bullet collides with a wall. If so it will kill the wall.
	 *
	 * @param entity The Bullet
	 */
	void bulletWithWall(Bullet* entity);

	/*
	 * @brief Checks if a certain alien collides with a wall. If So it will end the game.
	 *
	 * @param entity The Alien
	 */
	void alienWithWall(Alien* entity);

	/*
	 * @brief Checks if a certain alien collides with a gun. If So it will end the game.
	 *
	 * @param entity The Alien
	 */
	void alienWithGun(Alien* entity);
};

#endif /* COLLISIONCONTROLLER_H_ */
