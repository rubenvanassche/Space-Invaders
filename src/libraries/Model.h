/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "../libraries/Utilities.h"

class Model {
public:
	Model(){};
	virtual bool move(util::Direction direction) =0;
	virtual ~Model(){};
};

#endif /* MODEL_H_ */
