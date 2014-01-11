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
#include "../libraries/ScreenEntity.h"
#include "../factories/BulletFactory.h"
#include "../controllers/GameController.h"
#include <iostream>


/*
 * @brief The Gun Entity
 */
class Gun : public ScreenEntity {
public:
	/*
	 * @brief Gun Constructor
	 *
	 * @param location A point containing info of the location of the gun
	 * @param size A size
	 * @param si The Space Invaders Element
	 */
	Gun(sf::Vector2f location, int scale, SI* si);

	/*
	 * @brief updates the position of the Gun with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	/*
	 * @brief Change the location of the Entity by a given vector
	 *
	 * @param location The Vector to move to
	 */
	virtual void move(sf::Vector2f location){this->fSize.set(location);};

	/*
	 * @brief Get the scale of the gun
	 *
	 * @return An int
	 */
	int getScale(){return this->fScale;};

	/*
	 * @brief Shoot a bullet out of the gun
	 */
	void shoot();

	virtual ~Gun();
private:
	BulletFactory* fBulletFactory;
	int fScale;
};

#endif /* GUN_H_ */
