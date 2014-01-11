/**
 * BulletFactory.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLETFACTORY_H_
#define BULLETFACTORY_H_


#include "../libraries/Factory.h"
#include "../entities/Bullet.h"
#include "../views/BulletView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

/**
 * @brief A factory for building Bullets
 */
class BulletFactory : public Factory {
public:
	using Factory::Factory;

	/**
	 * @brief Creates a base bullet
	 *
	 * @param location The location of the bullet to start
	 * @param direction The direction(UP, DOWN) the bullet should go
	 * @param bt The type of the creature(ALIEN, HUMAN) the bullet was fired from
	 * @param from The ScreenEntity from where the bullet was shot, this should be a pointer
	 */
	void createBullet(sf::Vector2f location, util::Direction direction, bulletType bt, ScreenEntity* from);

	/**
	 * @brief Creates a Human bullet
	 *
	 * @param location The location of the bullet to start
	 * @param from The ScreenEntity from where the bullet was shot, this should be a pointer
	 */
	void createHumanBullet(sf::Vector2f location, ScreenEntity* from);

	/**
	 * @brief Creates a Human bullet
	 *
	 * @param location The location of the bullet to start
	 * @param from The ScreenEntity from where the bullet was shot, this should be a pointer
	 */
	void createAlienBullet(sf::Vector2f location, ScreenEntity* from);

	virtual ~BulletFactory();
};

#endif /** BULLETFACTORY_H_ */
