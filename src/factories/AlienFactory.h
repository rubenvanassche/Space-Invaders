/*
 * AlienFactory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIENFACTORY_H_
#define ALIENFACTORY_H_

#include "../libraries/Factory.h"
#include "../libraries/Config.h"
#include "../entities/Alien.h"
#include "../views/AlienView.h"
#include <SFML/System/Vector2.hpp>
#include <list>


class AlienFactory : public Factory{
public:
	// Use the Factory Constructor
	using Factory::Factory;
	void createRussel(sf::Vector2f location);
	virtual ~AlienFactory();
};

#endif /* ALIENFACTORY_H_ */
