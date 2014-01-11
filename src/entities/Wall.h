/**
 * Wall.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALL_H_
#define WALL_H_

#include <SFML/System/Vector2.hpp>
#include "../libraries/Size.h"
#include "../libraries/Utilities.h"
#include "../libraries/ScreenEntity.h"
#include <iostream>

/**
 * @brief Class representing the Wall Entity
 */
class Wall : public ScreenEntity {
public:
	/**
	 * @brief Wall Constructor
	 *
	 * @param location A point containing info of the location of the gun
	 * @param si The Space Invaders Element
	 */
	Wall(sf::Vector2f location, SI* si);
	virtual ~Wall();
};


#endif /** WALL_H_ */
