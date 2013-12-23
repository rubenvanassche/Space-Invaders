/*
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
	 * @brief updates the position of the Alien with an specified direction
	 *
	 * @param direction the direction to go to
	 */
	void move(util::Direction direction);


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
