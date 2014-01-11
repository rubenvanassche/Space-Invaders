/*
 * Model.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef SCREENENTITY_H_
#define SCREENENTITY_H_

#include "Utilities.h"
#include "../controllers/ScreenController.h"
#include "../libraries/Size.h"
#include "../libraries/Entity.h"
#include "../libraries/View.h"
#include <SFML/System/Vector2.hpp>
#include "Size.h"
#include "../libraries/SI.h"

/*
 * @brief The library for ScreenEntities(entities who should be displayed on the screen)
 */
class ScreenEntity : public Entity {
public:
	/*
	 * @brief COnstructor for ScreenEntity
	 *
	 * @param size The size for this entity
	 * @param si The Space Invaders Element
	 */
	ScreenEntity(Size size, SI* si) : fSize(size), Entity(si){};

	/*
	 * @brief Move this model by giving a direction
	 *
	 * @param direction The direction to move to
	 */
	virtual void move(util::Direction direction);

	/*
	 * @brief Change the location of the Entity by a given vector
	 *
	 * @param location The Vector to move to
	 */
	virtual void move(sf::Vector2f location){this->fSize.set(location);};

	/*
	 * @brief Calculate the movement by giving an int representing the x axis, this doesn't change the entity
	 *
	 * @param value The value on which the calculation should be performed
	 * @param direction The direction to move to
	 *
	 * @return int The recalculated value
	 */
	virtual int move(int value, util::Direction direction);

	/*
	 * @brief Collision support for Screen Entity's, check if this entity collides with another Screen Entity
	 *
	 * @param otherEntity the other Entity to check with
	 *
	 * @param bool Returns true of the entities collide
	 */
	virtual bool collides(ScreenEntity* otherEntity);

	/*
	 * @brief Get the location of the model object
	 *
	 * @return An vector2 containing the location
	 */
	virtual sf::Vector2f getLocation(){return this->fSize.getGrabPoint();};

	/*
	 * @brief Get the height of this entity
	 *
	 * @return int the height
	 */
	virtual int getHeight(){return this->fSize.getHeight();};

	/*
	 * @brief Get the width of this entity
	 *
	 * @return int the width
	 */
	virtual int getWidth(){return this->fSize.getWidth();};

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
	virtual bool isDead();

	/*
	 * @brief Kills an Entity(remove one life)
	 *
	 * @param forced Kill the anyway(default:false)
	 */
	virtual void kill(bool forced = false);

	/*
	 * @brief Get information about how many lives this Model has
	 *
	 * @return int The count of lives the model has
	 */
	int getLifes(){return this->fLifes;};

	/*
	 * @brief Set yhe view corresponding with the screen entity
	 *
	 * @param view A pointer to the view object corresponding with this entity
	 */
	void appendView(View* view){this->fEntityView = view;};

	/*
	 * @brief set the speed of an Screen Entity
	 *
	 * @param speed The speed as an int from 0 to ...
	 */
	virtual void setSpeed(int speed){this->fMovePixels = speed;};

	/*
	 * @brief raises the score from an Screen Entity
	 *
	 * @param score The score to add to this entity's existing score
	 */
	virtual void raiseScore(int score){this->fScore += score;};

	/*
	 * @brief Return the Score of an Entity
	 *
	 * @return An int containing this entity's score
	 */
	virtual int getScore(){return this->fScore;};

	virtual ~ScreenEntity(){};
protected:
	Size fSize;
	int fMovePixels = 2;
	int fLifes = 1;
	int fScore = 0;
	View* fEntityView = nullptr;
};

#endif /* SCREENENTITY_H_ */
