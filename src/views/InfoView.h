/**
 * InfoView.h
 *
 *  Created on: 23 dec. 2013
 *      Author: Ruben
 */

#ifndef INFOVIEW_H_
#define INFOVIEW_H_

#include "../entities/Gun.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>

/**
 * @brief View representing the bar with lives and score on top of the screen
 */
class InfoView : public View {
public:
	/**
	 * @brief Constructor for the Info View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Gun instance
	 */
	InfoView(sf::RenderWindow* window, Assets* assets, Gun* gun) : View(window, assets), fGun(gun){};

	/**
	 * @brief Draw the Info View
	 */
	void draw();

	virtual ~InfoView();
private:
	Gun* fGun;
};

#endif /** INFOVIEW_H_ */
