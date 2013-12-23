/*
 * MotionController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef MOTIONCONTROLLER_H_
#define MOTIONCONTROLLER_H_


#include "../libraries/Controller.h"
#include "../libraries/ScreenEntity.h"
#include "../controllers/GameController.h"
#include "../controllers/CollisionController.h"

class MotionController : public Controller {
public:
	MotionController(SI* si) : Controller(si) {};
	/*
	 * @brief Moves the gun to a certain direction
	 *
	 * @param direction The direction to move to
	 */
	void moveGun(util::Direction direction);

	/*
	 * @brief Moves the Aliens with one step
	 */
	void moveAliens();

	/*
	 * @brief Moves all the Bullets with one step
	 */
	void moveBullets();

	/*
	 * @brief Shoots a bullet out of the gun
	 */
	void shoot();

	virtual ~MotionController();
private:
	util::Direction fAlienDirection = util::LEFT;
	bool fAlienWentDown = false;
};

#endif /* MOTIONCONTROLLER_H_ */
