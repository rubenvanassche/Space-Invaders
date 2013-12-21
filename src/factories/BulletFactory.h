/*
 * BulletFactory.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLETFACTORY_H_
#define BULLETFACTORY_H_

#include "../libraries/Factory.h"
#include "../libraries/Config.h"
#include "../models/Bullet.h"
#include "../views/BulletView.h"
#include <SFML/System/Vector2.hpp>
#include <list>

class BulletFactory : public Factory {
public:
	using Factory::Factory;
	void createBullet(sf::Vector2f location);
	virtual ~BulletFactory();
};

#endif /* BULLETFACTORY_H_ */
