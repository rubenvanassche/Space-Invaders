/**
 * AlienFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIENFACTORY_H_
#define ALIENFACTORY_H_

#include "../libraries/Factory.h"
#include "../entities/Alien.h"
#include "../views/AlienView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

/**
 * @brief A factory for building Aliens
 */
class AlienFactory : public Factory{
public:
	// Use the Factory Constructor
	using Factory::Factory;

	/**
	 * @brief Creates Russel a wilderness explorer Alien
	 *
	 * @param location The location of Russel
	 */
	void createRussel(sf::Vector2f location);

	/**
	 * @brief Creates Doug a talking dog Alien
	 *
	 * @param location The location of Doug
	 */
	void createDoug(sf::Vector2f location);

	/**
	 * @brief Creates Carl a funny old man Alien
	 *
	 * @param location The location of Carl
	 */
	void createCarl(sf::Vector2f location);

	/**
	 * @brief Creates Muntz a not so funny old man Alien
	 *
	 * @param location The location of Muntz
	 */
	void createMuntz(sf::Vector2f location);

	virtual ~AlienFactory();
};

#endif /** ALIENFACTORY_H_ */
