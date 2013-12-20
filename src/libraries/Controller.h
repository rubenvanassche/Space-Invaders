/*
 * Controller.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "View.h"
#include "Model.h"
#include <list>

class Controller {
public:
	Controller(std::list<Model*>* models, std::list<View*>* views) : fViews(views), fModels(models){};
	virtual ~Controller(){};
protected:
	std::list<View*>* fViews;
	std::list<Model*>* fModels;
};

#endif /* CONTROLLER_H_ */
