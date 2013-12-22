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
#include "SI.h"
#include <list>
#include <memory>

class Factory {
public:
	Factory(std::list<Entity*>* entities, std::list<View*>* views, SI* si) : fEntities(entities), fViews(views), fSI(si){};

	virtual ~Factory(){};
protected:
	std::list<Entity*>* fEntities;
	std::list<View*>* fViews;
	SI* fSI;
};

#endif /* FACTORY_H_ */
