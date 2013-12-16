/*
 * Alien.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIEN_H_
#define ALIEN_H_

#include "Bullet.h"
#include "../libraries/Size.h"
#include "../libraries/Point.h"
#include "../libraries/Color.h"

/*
 * @brief The Alien model
 */
class Alien {
public:
	Alien();

	/*
	 * @brief Check whether a bullet collides with this Alien
	 *
	 * @param bullet The bullet fired at the alien
	 *
	 * @return bool telling if the bullet hit the alien
	 */
	bool Collusion(Bullet bullet);

	/*
	 * @brief updates the position of the Alien with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(Direction direction);

	virtual ~Alien();
private:
	Bullet* fBullet;
	Point fPosition;
	Size fSize;
	bool dead;
};

#endif /* ALIEN_H_ */
