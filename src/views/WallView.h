/***
 * WallView.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALLVIEW_H_
#define WALLVIEW_H_

#include "../entities/Wall.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
#include <iostream>

/**
 * @brief View representing a Wall
 */
class WallView : public View{
public:
	/**
	 * @brief Constructor for the Wall View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Wall instance
	 */
	WallView(sf::RenderWindow* window, Assets* assets, Wall* wall) : View(window, assets), fWall(wall){};

	/**
	 * @brief Draw the Wall
	 */
	void draw();

	/**
	 * @brief Returns the entity this view is connected to
	 *
	 * @return A pointer to the ScreenEntity
	 */
	ScreenEntity* getEntity(){return dynamic_cast<ScreenEntity*>(this->fWall);};

	virtual ~WallView();
private:
	Wall* fWall = nullptr;
};

#endif /** WALLVIEW_H_ */
