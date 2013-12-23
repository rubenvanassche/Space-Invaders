/*
 * Controller.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <list>
#include "SI.h"
//#include "Utilities.h"

class SI;

class Controller {
public:
	Controller(SI* si) : fSI(si){};
	virtual ~Controller(){};
protected:
	SI* fSI;
};

#endif /* CONTROLLER_H_ */
