/*
 * Factory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include "Entity.h"
#include "View.h"
#include "Config.h"
#include <list>
#include <memory>

class Factory {
public:
	Factory(std::list<Entity*>* entities, std::list<View*>* views, Config* config) : fEntities(entities), fViews(views), fConfig(config){};

	virtual ~Factory(){};
protected:
	std::list<Entity*>* fEntities;
	std::list<View*>* fViews;
	Config* fConfig;
};

#endif /* FACTORY_H_ */
