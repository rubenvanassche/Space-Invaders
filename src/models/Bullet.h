/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "../libraries/Point.h"
#include "../libraries/Size.h"

/*
 * @brief The Bullet model
 */
class Bullet {
public:
	Bullet();

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(Direction direction);

	virtual ~Bullet();
private:
	Point fPosition;
	Size fSize;
};

#endif /* BULLET_H_ */
