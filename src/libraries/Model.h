/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "../libraries/Utilities.h"
#include "../libraries/View.h"

class Model {
public:
	Model(){};

	virtual bool move(util::Direction direction) =0;
	/*
	 * @brief Add the View corresponding to this model
	 *
	 * @param view A pointer to the View
	 */
	void appendView(View* view){this->fView = view;};

	virtual ~Model(){};
protected:
	View* fView = nullptr;
};

#endif /* MODEL_H_ */
