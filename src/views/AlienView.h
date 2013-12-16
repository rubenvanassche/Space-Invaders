/*
 * AlienView.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIENVIEW_H_
#define ALIENVIEW_H_

#include "../models/Alien.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>

class AlienView : public View {
public:
	/*
	 * @brief Constructor for the Alien View
	 *
	 * @param alien A pointer to the Alien instance
	 */
	AlienView(Alien* alien) : fAlien(alien){this->fColor = sf::Color(255, 255, 0);};

	/*
	 * @brief Constructor for the Alien View
	 *
	 * @param alien A pointer to the Alien instance
	 * @param color The color of the gun
	 */
	AlienView(Alien* alien, sf::Color color) : fAlien(alien), fColor(color){};

	/*
	 * @brief Draw the Alien by returning a VertexArray
	 *
	 * @return VertexArray containing info about the alien
	 */
	sf::VertexArray draw();
	virtual ~AlienView();
private:
	Alien* fAlien = nullptr;
	sf::Color fColor;
};

#endif /* ALIENVIEW_H_ */
