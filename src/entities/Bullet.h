/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "../libraries/Entity.h"
#include "../libraries/Utilities.h"


/*
 * @brief The Bullet model
 */
class Bullet : public Entity {
public:
	Bullet(sf::Vector2f location, util::Direction direction, SI* si) : fDirection(direction),  Entity(location, si){this->fMovePixels = 20;};

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	virtual ~Bullet();
private:
	util::Direction fDirection;
};

#endif /* BULLET_H_ */
