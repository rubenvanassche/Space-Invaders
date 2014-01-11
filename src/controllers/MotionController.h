/**
 * MotionController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef MOTIONCONTROLLER_H_
#define MOTIONCONTROLLER_H_

#include <random>
#include "../libraries/Controller.h"
#include "../libraries/ScreenEntity.h"
#include "../controllers/GameController.h"
#include "../controllers/CollisionController.h"

/**
 * @brief The Controller who is in control of the motion during the game
 */
class MotionController : public Controller {
public:
	/**
	 * @brief Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	MotionController(SI* si) : Controller(si) {};

	/**
	 * @brief Moves the gun to a certain direction
	 *
	 * @param direction The direction to move to
	 */
	void moveGun(util::Direction direction);

	/**
	 * @brief Moves the Aliens with one step
	 */
	void moveAliens();

	/**
	 * @brief Moves all the Bullets with one step
	 */
	void moveBullets();

	/**
	 * @brief Shoots a bullet out of the gun
	 */
	void shootGun();

	/**
	 * @brief shoots a bullet out of a random alien
	 */
	void shootAlien();

	virtual ~MotionController();
private:
	util::Direction fAlienDirection = util::LEFT;
	bool fAlienWentDown = false;
};

#endif /** MOTIONCONTROLLER_H_ */
