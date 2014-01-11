/*
 * Bullet.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "../libraries/ScreenEntity.h"
#include "../libraries/Utilities.h"

enum bulletType {ALIEN, HUMAN};

/*
 * @brief The Bullet model
 */
class Bullet : public ScreenEntity {
public:
	Bullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from, bulletType bullettype, SI* si);

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	/*
	 * @brief get a pointer to the screen entity from where this bullet was fired
	 */
	ScreenEntity* getFiredfrom(){return this->fFrom;};

	/*
	 * @brief get the type of bullet(ALIEN, HUMAN)
	 */
	bulletType getType(){return this->fType;};

	/*
	 * @brief Kills an Entity(remove one life)
	 */
	void kill(bool forced = false);

	virtual ~Bullet();
private:
	util::Direction fDirection;
	ScreenEntity* fFrom;
	bulletType fType;
};

#endif /* BULLET_H_ */
