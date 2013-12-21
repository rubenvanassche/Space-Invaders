/*
 * WallView.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALLVIEW_H_
#define WALLVIEW_H_

#include "../models/Wall.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class WallView : public View{
public:
	WallView(sf::RenderWindow* window, Wall* wall) : View(window), fWall(wall){};

	/*
	 * @brief Draw the Gun by returning a VertexArray
	 */
	void draw();

	virtual ~WallView();
private:
	Wall* fWall = nullptr;
};

#endif /* WALLVIEW_H_ */
