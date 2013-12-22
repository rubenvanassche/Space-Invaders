/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include "../libraries/Utilities.h"
#include "../controllers/ScreenController.h"
#include "../libraries/Size.h"
#include <SFML/System/Vector2.hpp>
#include "Size.h"
#include "../libraries/SI.h"


class Entity {
public:
	Entity(sf::Vector2f location, SI* si) : fSI(si), fLocation(location){};

	/*
	 * @brief Move this model by giving a direction
	 *
	 * @param direction The direction to move to
	 */
	virtual void move(util::Direction direction){util::move(this->fLocation, direction, this->fMovePixels);};

	/*
	 * @brief Calculate the movement by giving an int
	 *
	 * @param value The value on which the calculation should be performed
	 * @param direction The direction to move to
	 *
	 * @return int The recalculated value
	 */
	virtual int move(int value, util::Direction direction);


	/*
	 * @brief Get the location of the model object
	 *
	 * @return An vector2 containing the location
	 */
	virtual sf::Vector2f getLocation(){return this->fLocation;};

	/*
	 * @brief Get the scale of the model object
	 *
	 * @return An int
	 */
	virtual int getScale(){return 1;};

	/*
	 * @brief Get the size of this Model
	 *
	 * @return Size the size object
	 */
	virtual Size getSize(){return this->fSize;};

	/*
	 * @brief Get information about the life of this Model
	 *
	 * #return bool representing if the Model is dead or not
	 */
	bool isDead(){if(fLifes == 0){return true;}else{return false;}};

	/*
	 * @brief Get information about how many lives this Model has
	 *
	 * @return int The count of lives the model has
	 */
	int getLifes(){return this->fLifes;};

	/*
	 * TODO: Remove this
	 */
	virtual void shoot(){return;};

	virtual ~Entity(){};
protected:
	SI* fSI = nullptr;
	sf::Vector2f fLocation;
	Size fSize;
	int fMovePixels = 2;
	int fLifes = 1;
};

#endif /* ENTITY_H_ */
