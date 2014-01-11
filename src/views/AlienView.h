/**
 * AlienView.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef ALIENVIEW_H_
#define ALIENVIEW_H_

#include "../entities/Alien.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>

/**
 * @brief View representing an Alien
 */
class AlienView : public View {
public:
	/**
	 * @brief Constructor for the Alien View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Alien instance
	 */
	AlienView(sf::RenderWindow* window, Assets* assets, Alien* alien) : fAlien(alien), View(window, assets){this->fColor = sf::Color(255, 255, 0);};

	/**
	 * @brief Constructor for the Alien View
	 *
	 * @param alien A pointer to the Alien instance
	 * @param color The color of the gun
	 */
	AlienView(sf::RenderWindow* window, Assets* assets, Alien* alien, sf::Color color) : fAlien(alien), fColor(color), View(window, assets){};

	/**
	 * @brief Draw the Alien
	 */
	void draw();

	/**
	 * @brief Returns the entity this view is connected to
	 *
	 * @return A pointer to the ScreenEntity
	 */
	ScreenEntity* getEntity(){return dynamic_cast<ScreenEntity*>(this->fAlien);};

	virtual ~AlienView();
private:
	/**
	 * @brief Draws an alternative alien for some reason
	 */
	void drawAlternative();

	Alien* fAlien = nullptr;
	sf::Color fColor;
};

#endif /** ALIENVIEW_H_ */
