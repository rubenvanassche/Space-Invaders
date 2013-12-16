/*
 * Gun.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUN_H_
#define GUN_H_

#include <SFML/System/Vector2.hpp>
#include "../libraries/Size.h"
#include "../libraries/Utilities.h"
#include "../libraries/Model.h"

/*
 * @brief The Gun model
 */
class Gun : public Model {
public:
	/*
	 * @brief Gun Constructor
	 *
	 * @param location A point containing info of the location of the gun
	 * @param size A size
	 */
	Gun(sf::Vector2f location, int scale) : fLocation(location), fScale(scale) {};

	/*
	 * @brief updates the position of the Gun with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	bool move(util::Direction direction);

	/*
	 * @brief Get the location of the gun
	 *
	 * @return An vector2 containing the location
	 */
	sf::Vector2f getLocation(){return this->fLocation;};

	/*
	 * @brief Get the scale of the gun
	 *
	 * @retunr An int
	 */
	int getScale(){return this->fScale;};

	virtual ~Gun();
private:
	sf::Vector2f fLocation;
	int fScale;

	int fMovePixels = 5; // Amount of pixels to move with move action
};

#endif /* GUN_H_ */
