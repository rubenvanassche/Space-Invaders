/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "../libraries/ScreenEntity.h"
#include "../libraries/Utilities.h"


/*
 * @brief The Bullet model
 */
class Bullet : public ScreenEntity {
public:
	Bullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from, SI* si);

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	/*
	 * @brief check if the bullet is dead if so it also removes the View corresponding with this bullet
	 */
	bool isDead();

	virtual ~Bullet();
private:
	util::Direction fDirection;
	ScreenEntity* fFrom;
};

#endif /* BULLET_H_ */
