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
	MotionController( std::list<Model*>* models, std::list<View*>* views) : Controller(models, views){};
	void moveGun(util::Direction direction);
	virtual ~MotionController();
};

#endif /* MOTIONCONTROLLER_H_ */
