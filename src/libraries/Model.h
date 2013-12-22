/*
 * Model.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "SI.h"

class Model {
public:
	Model(SI* si) : fSI(si){};
	virtual ~Model();
protected:
	SI* fSI;
};

#endif /* MODEL_H_ */
