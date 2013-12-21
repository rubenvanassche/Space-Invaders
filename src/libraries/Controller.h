/*
 * Controller.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Config.h"
#include <list>

class Controller {
public:
	Controller(Config* config) : fConfig(config){};
	virtual ~Controller(){};
protected:
	Config* fConfig;
};

#endif /* CONTROLLER_H_ */
