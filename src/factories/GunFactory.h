/**
 * GunFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNFACTORY_H_
#define GUNFACTORY_H_


#include "../libraries/Factory.h"
#include "../entities/Gun.h"
#include "../views/GunView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

/**
 * @brief A factory for building Guns
 */
class GunFactory : public Factory {
public:
	// Use the Factory Constructor
	using Factory::Factory;

	/**
	 * @brief Creates Blaster a regular spaceship gun
	 */
	void createBlaster();

	/**
	 * @brief Creates Shooter a good spaceship gun
	 */
	void createShooter();

	/**
	 * @brief Creates Cannoner the best spaceship gun
	 */
	void createCannoner();

	virtual ~GunFactory();
};

#endif /** GUNFACTORY_H_ */
