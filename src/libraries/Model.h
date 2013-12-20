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

	/*
	 * @brief Get the location of the model object
	 *
	 * @return An vector2 containing the location
	 */
	virtual sf::Vector2f getLocation() =0;

	/*
	 * @brief Get the scale of the model object
	 *
	 * @retunr An int
	 */
	virtual int getScale() =0;

	virtual ~Model(){};
protected:
	View* fView = nullptr;
};

#endif /* MODEL_H_ */
