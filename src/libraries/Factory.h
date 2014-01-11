/*
 * Factory.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include "ScreenEntity.h"
#include "View.h"
#include "SI.h"
#include <list>
#include <memory>

/*
 * @brief The library for Factories
 */
class Factory {
public:
	/*
	 * @brief The Factory Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	Factory(SI* si) : fSI(si){};

	virtual ~Factory(){};
protected:
	SI* fSI;
};

#endif /* FACTORY_H_ */
