/*
 * GunView.h
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#ifndef GUNVIEW_H_
#define GUNVIEW_H_

#include "../models/Gun.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
/*
 * @brief The view of the gun
 *    ||
 * ||||||||
 */
class GunView : public View {
public:
	/*
	 * @brief Constructor for the Gun View
	 *
	 * @param gun A pointer to the Gun instance
	 */
	GunView(Gun* gun) : fGun(gun){this->fColor = sf::Color(255, 0, 0);};

	/*
	 * @brief Constructor for the Gun View
	 *
	 * @param gun A pointer to the Gun instance
	 * @param color The color of the gun
	 */
	GunView(Gun* gun, sf::Color color) : fGun(gun), fColor(color){};

	/*
	 * @brief Draw the Gun by returning a VertexArray
	 *
	 * @return VertexArray containing info about the gun
	 */
	sf::VertexArray draw();

	virtual ~GunView();
private:
	Gun* fGun = nullptr;
	sf::Color fColor;
	int fScale = 1;
};

#endif /* GUNVIEW_H_ */
