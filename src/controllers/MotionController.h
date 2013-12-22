/*
 * MotionController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef MOTIONCONTROLLER_H_
#define MOTIONCONTROLLER_H_


#include "../libraries/Controller.h"
#include "../libraries/Entity.h"
#include "../controllers/GameController.h"

class MotionController : public Controller {
public:
	MotionController(std::list<Entity*>* guns, std::list<Entity*>* aliens, std::list<Entity*>* bullets, SI* si) : fGuns(guns), fAliens(aliens), fBullets(bullets), Controller(si) {};
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
	std::list<Entity*>* fGuns;
	std::list<Entity*>* fAliens;
	std::list<Entity*>* fBullets;
	util::Direction fAlienDirection = util::LEFT;
	bool fAlienWentDown = false;
};

#endif /* MOTIONCONTROLLER_H_ */
