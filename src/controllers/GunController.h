/*
 * GunController.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNCONTROLLER_H_
#define GUNCONTROLLER_H_

#include "../libraries/Controller.h"
#include "../libraries/Utilities.h"
#include "../models/Gun.h"
#include "../views/GunView.h"
#include "../factories/GunFactory.h"
#include <memory>
#include <list>

class GunController : public Controller{
public:
	GunController();

	/*
	 * @brief Move the gun in a certain direction
	 *
	 * @param direction The direction the gun has to move to
	 *
	 * @return Bool with success/failure
	 */
	bool move(util::Direction direction);

	virtual ~GunController();
private:
	std::shared_ptr<GunFactory> gunFactory;
	std::list<Gun*> guns;
	std::list<GunView*> views;
};

#endif /* GUNCONTROLLER_H_ */
