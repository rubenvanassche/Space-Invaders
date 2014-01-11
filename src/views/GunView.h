/*
 * GunView.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNVIEW_H_
#define GUNVIEW_H_

#include "../entities/Gun.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
#include <iostream>

/*
 * @brief View representing a Gun
 */
class GunView : public View {
public:
	/*
	 * @brief Constructor for the Gun View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Gun instance
	 */
	GunView(sf::RenderWindow* window, Assets* assets, Gun* gun) : fGun(gun), View(window, assets){this->fColor = sf::Color(255, 0, 0);};

	/*
	 * @brief Constructor for the Alien View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Gun instance
	 * @param color The color of the gun
	 */
	GunView(sf::RenderWindow* window, Assets* assets, Gun* gun, sf::Color color) : fGun(gun), fColor(color), View(window, assets){};

	/*
	 * @brief Draw the Gun
	 */
	void draw();

	// TODO: cast fGun
	//ScreenEntity* getEntity(){nullptr;};

	/*
	 * @brief Get the scale of the gun
	 *
	 * @return an int representing the scale
	 */
	int getScale(){return this->fScale;};

	virtual ~GunView();
private:
	Gun* fGun = nullptr;
	sf::Color fColor;
	int fScale = 1;
};

#endif /* GUNVIEW_H_ */
