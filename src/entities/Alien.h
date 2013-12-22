/*
 * Alien.h
 *
 *  Created on: 7 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIEN_H_
#define ALIEN_H_

#include "Bullet.h"
#include "../libraries/Size.h"
#include "../libraries/Utilities.h"
#include "../libraries/ScreenEntity.h"
#include <SFML/System/Vector2.hpp>


/*
 * @brief The Alien model
 */
class Alien : public ScreenEntity{
public:
	/*
	 * @brief Alien Constructor
	 */
	Alien(sf::Vector2f location, SI* si);

	/*
	 * @brief Check whether a bullet collides with this Alien
	 *
	 * @param bullet The bullet fired at the alien
	 *
	 * @return bool telling if the bullet hit the alien
	 */
	bool Collusion(Bullet* bullet);

	/*
	 * @brief updates the position of the Alien with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);

	/*
	 * @brief Get the location of the Alien
	 *
	 * @return An vector2 containing the location
	 */
	sf::Vector2f getLocation(){return this->fLocation;};

	/*
	 * @brief Get's the scale of the alien
	 *
	 * @retun Integer = 1
	 */
	int getScale(){return 1;}

	/*
	 * @brief Get the ticktock of the alien, thsi represents which image should be used to draw
	 *
	 * @return int The ticktock
	 */
	int getTickTock(){return this->fTickTock;};

	virtual ~Alien();
private:
	int fTickTock = 0; // Needed for drawing the right version
};

#endif /* ALIEN_H_ */
