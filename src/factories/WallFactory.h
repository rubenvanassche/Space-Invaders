/*
 * WallFactory.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALLFACTORY_H_
#define WALLFACTORY_H_

#include "../libraries/Factory.h"
#include "../libraries/Config.h"
#include "../models/Wall.h"
#include "../views/WallView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

class WallFactory : public Factory {
public:
	using Factory::Factory;
	void createWall(sf::Vector2f location);
	virtual ~WallFactory();
};

#endif /* WALLFACTORY_H_ */
