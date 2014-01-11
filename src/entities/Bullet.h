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
 * @brief The Bullet Entity
 */
class Bullet : public ScreenEntity {
public:
	/*
	 * @brief Bullet Constructor
	 *
	 * @param location The location of the Bullet
	 * @param direction The Direction(UP, DOWN) the bullet need to go
	 * @param from The Entity from where this bullet was fired
	 * @param bulletType The type of creature(HUMAN, ALIEN) this bullet was fired from
	 * @param si The Space Invaders Element
	 */
	Bullet(sf::Vector2f location, util::Direction direction, ScreenEntity* from, bulletType bullettype, SI* si);

	/*
	 * @brief updates the position of the Bullet with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	/*
	 * @brief get a pointer to the screen entity from where this bullet was fired
	 *
	 * @return A ScreenEntity pointer to the entity from where this bullet was shot
	 */
	ScreenEntity* getFiredfrom(){return this->fFrom;};

	/*
	 * @brief get the type of bullet(ALIEN, HUMAN)
	 *
	 * @return A bulletType
	 */
	bulletType getType(){return this->fType;};

	/*
	 * @brief Kills an Entity(remove one life)
	 *
	 * @param forced Default false, when true it will not reduce one life but kill the whole bullet
	 */
	void kill(bool forced = false);

	virtual ~Bullet();
private:
	util::Direction fDirection;
	ScreenEntity* fFrom;
	bulletType fType;
};

#endif /* BULLET_H_ */
