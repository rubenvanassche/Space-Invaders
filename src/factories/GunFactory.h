/*
 * GunFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNFACTORY_H_
#define GUNFACTORY_H_

#include "../libraries/Factory.h"
#include "../models/Gun.h"
#include "../views/GunView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

class GunFactory : public Factory {
public:
	GunFactory(std::list<Model*>* models,
			std::list<View*>* views
			) : Factory(models, views){};

	void createBlaster();

	virtual ~GunFactory();
};

#endif /* GUNFACTORY_H_ */
