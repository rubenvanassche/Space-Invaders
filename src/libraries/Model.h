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
#include "../libraries/Size.h"
#include <SFML/System/Vector2.hpp>


class Model {
public:
	Model(sf::Vector2f location, Config* config) : fConfig(config), fLocation(location){};

	/*
	 * @brief Move this model by giving a direction
	 *
	 * @param direction The direction to move to
	 */
	virtual void move(util::Direction direction) =0;

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
	virtual sf::Vector2f getLocation() =0;

	/*
	 * @brief Get the scale of the model object
	 *
	 * @return An int
	 */
	virtual int getScale() =0;

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
	bool isDead(){if(lives == 0){return true;}else{return false;}};

	virtual ~Model(){};
protected:
	Config* fConfig = nullptr;
	sf::Vector2f fLocation;
	Size fSize;
	int fMovePixels = 2;
	int lives = 1;
};

#endif /* MODEL_H_ */
