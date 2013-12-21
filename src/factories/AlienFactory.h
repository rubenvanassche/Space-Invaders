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
#include "../models/Alien.h"
#include "../views/AlienView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

class AlienFactory : public Factory{
public:
	AlienFactory(std::list<Model*>* aliens, std::list<View*>* views, Config* config) : fConfig(config), Factory(aliens, views){};
	void createRussel(sf::Vector2f location);
	virtual ~AlienFactory();
private:
	Config* fConfig;
};

#endif /* ALIENFACTORY_H_ */
