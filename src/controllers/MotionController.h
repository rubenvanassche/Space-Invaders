/*
 * MotionController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef MOTIONCONTROLLER_H_
#define MOTIONCONTROLLER_H_

#include "../libraries/Controller.h"
#include "../libraries/Utilities.h"
#include "../libraries/Model.h"
#include <iostream>

class MotionController : public Controller {
public:
	MotionController(std::list<Model*>* guns, std::list<Model*>* aliens, std::list<Model*>* bullets, Config* config) : fGuns(guns), fAliens(aliens), fBullets(bullets), Controller(config) {};
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
	 * @brief Shoots a bullet out of the gun
	 */
	void shoot();

	virtual ~MotionController();
private:
	std::list<Model*>* fGuns;
	std::list<Model*>* fAliens;
	std::list<Model*>* fBullets;
	util::Direction fAlienDirection = util::LEFT;
};

#endif /* MOTIONCONTROLLER_H_ */
