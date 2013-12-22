/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include "../libraries/SI.h"


class Entity {
public:
	Entity(SI* si) : fSI(si){};

	virtual ~Entity(){};
protected:
	SI* fSI = nullptr;
};

#endif /* ENTITY_H_ */
