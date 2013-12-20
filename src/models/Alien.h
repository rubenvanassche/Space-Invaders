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
#include "../libraries/Model.h"
#include <SFML/System/Vector2.hpp>

/*
 * @brief The Alien model
 */
class Alien : public Model{
public:
	/*
	 * @brief Alien Constructor
	 *
	 * @param location A point containing info of the location of the alien
	 */
	Alien(sf::Vector2f location) : fLocation(location) {dead = false;};

	/*
	 * @brief Check whether a bullet collides with this Alien
	 *
	 * @param bullet The bullet fired at the alien
	 *
	 * @return bool telling if the bullet hit the alien
	 */
	bool Collusion(Bullet bullet);

	/*
	 * @brief updates the position of the Alien with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	bool move(util::Direction direction);

	/*
	 * @brief Get the location of the Alien
	 *
	 * @return An vector2 containing the location
	 */
	sf::Vector2f getLocation(){return this->fLocation;};

	virtual ~Alien();
private:
	sf::Vector2f fLocation;
	bool dead;

	int fMovePixels = 2;
};

#endif /* ALIEN_H_ */
