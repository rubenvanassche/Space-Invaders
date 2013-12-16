/*
 * Gun.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUN_H_
#define GUN_H_

#include "../libraries/Point.h"
#include "../libraries/Size.h"

/*
 * @brief The Gun model
 */
class Gun {
public:
	/*
	 * @brief Gun Constructor
	 *
	 * @param location A point containing info of the location of the gun
	 * @param size A size
	 */
	Gun(Point location, Size size) : fLocation(location), fSize(size) {};

	/*
	 * @brief updates the position of the Gun with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	bool move(Direction direction);

	virtual ~Gun();
private:
	Point fLocation;
	Size fSize;

	int movePixels = 2; // Amount of pixels to move with move action
};

#endif /* GUN_H_ */
