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
	AlienView(sf::RenderWindow* window, Alien* alien) : fAlien(alien), View(window){this->fColor = sf::Color(255, 255, 0);};

	/*
	 * @brief Constructor for the Alien View
	 *
	 * @param alien A pointer to the Alien instance
	 * @param color The color of the gun
	 */
	AlienView(sf::RenderWindow* window, Alien* alien, sf::Color color) : fAlien(alien), fColor(color), View(window){};

	/*
	 * @brief Draw the Alien by returning a VertexArray
	 */
	void draw();

	virtual ~AlienView();
private:
	Alien* fAlien = nullptr;
	sf::Color fColor;
	int fTickTock = 0;
};

#endif /* ALIENVIEW_H_ */
