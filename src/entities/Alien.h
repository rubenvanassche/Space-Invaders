/**
 * Alien.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIEN_H_
#define ALIEN_H_

#include "../libraries/Size.h"
#include "../libraries/Utilities.h"
#include "../libraries/ScreenEntity.h"
#include "../factories/BulletFactory.h"
#include <SFML/System/Vector2.hpp>

enum AlienType{RUSSEL, CARL, DOUG, MUNTZ};

/**
 * @brief The Alien Entity
 */
class Alien : public ScreenEntity{
public:
	/**
	 * @brief Alien Constructor
	 *
	 * @param location The location of the Alien
	 * @param si The Space Invaders Element
	 * @param type the Type of Alien, it can be RUSSEL, DOUG, MUNTZ or CARL
	 */
	Alien(sf::Vector2f location, SI* si, AlienType type);

	/**
	 * @brief updates the position of the Alien with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);


	/**
	 * @brief Get the ticktock of the alien, this represents which image should be used to draw
	 *
	 * @return int The ticktock
	 */
	int getTickTock() const {return this->fTickTock;};

	/**
	 * @brief shoot a bullet out of the gun of this alien
	 */
	void shoot();

	/**
	 * @brief get the type of this Alien
	 *
	 * @return enumeration with Russel, Carl, Doug or Muntz
	 */
	AlienType getType() const {return this->fType;};

	virtual ~Alien();
private:
	int fTickTock = 0; // Needed for drawing the right version
	BulletFactory* fBulletFactory;
	AlienType fType = RUSSEL;
};

#endif /** ALIEN_H_ */
