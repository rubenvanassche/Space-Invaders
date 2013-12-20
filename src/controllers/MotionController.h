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

class MotionController : public Controller {
public:
	MotionController(std::list<Model*>* guns, std::list<Model*>* aliens, std::list<Model*>* bullets) : fGuns(guns), fAliens(aliens), fBullets(bullets) {};
	void moveGun(util::Direction direction);
	virtual ~MotionController();
private:
	std::list<Model*>* fGuns;
	std::list<Model*>* fAliens;
	std::list<Model*>* fBullets;
};

#endif /* MOTIONCONTROLLER_H_ */
