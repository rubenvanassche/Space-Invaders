/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "../libraries/Utilities.h"
#include "../controllers/ScreenController.h"


class Model {
public:
	Model(Config* config) : fConfig(config){};

	virtual void move(util::Direction direction) =0;

	/*
	 * @brief Get the location of the model object
	 *
	 * @return An vector2 containing the location
	 */
	virtual sf::Vector2f getLocation() =0;

	/*
	 * @brief Get the scale of the model object
	 *
	 * @return An int
	 */
	virtual int getScale() =0;

	virtual ~Model(){};
protected:
	Config* fConfig = nullptr;
};

#endif /* MODEL_H_ */
