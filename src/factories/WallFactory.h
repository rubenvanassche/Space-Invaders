/**
 * WallFactory.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALLFACTORY_H_
#define WALLFACTORY_H_

#include "../libraries/Factory.h"
#include "../entities/Wall.h"
#include "../views/WallView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

/**
 * @brief A factory for building Walls
 */
class WallFactory : public Factory {
public:
	using Factory::Factory;

	/**
	 * @brief creates a regular wall
	 *
	 * @param location The location where the wall should be standing(flying)
	 */
	void createWall(sf::Vector2f location);

	virtual ~WallFactory();
};

#endif /** WALLFACTORY_H_ */
