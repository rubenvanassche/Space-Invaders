/*
 * CollisionController.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef COLLISIONCONTROLLER_H_
#define COLLISIONCONTROLLER_H_


#include "../libraries/Controller.h"
#include "../libraries/ScreenEntity.h"
#include "../entities/Bullet.h"
#include "../entities/Alien.h"
#include "../entities/Wall.h"
#include "../entities/Gun.h"
#include <iostream>

class CollisionController : public Controller {
public:
	CollisionController(SI* si) : Controller(si){};
	void check();
	virtual ~CollisionController();
private:
	void withGun(ScreenEntity* entity);
	void withAlien(ScreenEntity* entity);
	void withWall(ScreenEntity* entity);
};

#endif /* COLLISIONCONTROLLER_H_ */
