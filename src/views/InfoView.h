/*
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

class InfoView : public View {
public:
	InfoView(sf::RenderWindow* window, Assets* assets, Gun* gun) : View(window, assets), fGun(gun){};

	/*
	 * @brief Draw the Gun by returning a VertexArray
	 */
	void draw();

	virtual ~InfoView();
private:
	Gun* fGun;
};

#endif /* INFOVIEW_H_ */
