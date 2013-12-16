/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include <SFML/System/Vector2.hpp>
#include "../libraries/Size.h"
#include "../libraries/Utilities.h"

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
	void move(util::Direction direction);

	virtual ~Bullet();
private:
	sf::Vector2f fPosition;
	Size fSize;
};

#endif /* BULLET_H_ */
