/*
 * Wall.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef WALL_H_
#define WALL_H_

#include <SFML/System/Vector2.hpp>
#include "../libraries/Size.h"
#include "../libraries/Utilities.h"
#include "../libraries/Model.h"
#include <iostream>


class Wall : public Model {
public:
	Wall(sf::Vector2f location, Config* config) : Model(location, config){this->fLifes = 3;};
	virtual ~Wall();
};


#endif /* WALL_H_ */
