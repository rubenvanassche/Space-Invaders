/*
 * GunFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNFACTORY_H_
#define GUNFACTORY_H_


#include "../libraries/Factory.h"
#include "../entities/Gun.h"
#include "../views/GunView.h"
#include <SFML/System/Vector2.hpp>
#include <list>


class GunFactory : public Factory {
public:
	// Use the Factory Constructor
	using Factory::Factory;
	void createBlaster();
	virtual ~GunFactory();
};

#endif /* GUNFACTORY_H_ */
