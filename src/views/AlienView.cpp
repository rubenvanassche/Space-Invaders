/*
 * AlienView.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienView.h"

void AlienView::draw(){
	// Get the starting point
	sf::Vector2f gunLocation = this->fAlien->getLocation();

	sf::VertexArray array(sf::Quads, 4);
	array[0].position = sf::Vector2f(gunLocation.x, gunLocation.y);
	array[1].position = sf::Vector2f(gunLocation.x + 10, gunLocation.y);
	array[2].position = sf::Vector2f(gunLocation.x + 10, gunLocation.y + 10);
	array[3].position = sf::Vector2f(gunLocation.x, gunLocation.y + 10);



	for(unsigned int i = 0;i < 4;i++){
		array[i].color = this->fColor;
	}

	this->fWindow->draw(array);
}

AlienView::~AlienView() {
	// TODO Auto-generated destructor stub
}

