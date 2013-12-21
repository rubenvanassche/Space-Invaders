/*
 * GunView.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "GunView.h"

void GunView::draw(){
	// Get the starting point
	sf::Vector2f gunLocation = this->fGun->getLocation();
	// Get the scale
	int scale = this->fGun->getScale();

	// TODO:
	//      3 - 4
	//      |   |
	// 1 -- 2   5 -- 6
	// |  			 |
	// 0 ----------- 7
	// NOW:
	// 0 ------ 1
	// |	    |
	// 3 ------ 2
	sf::VertexArray array(sf::Quads, 4);
	array[0].position = sf::Vector2f(gunLocation.x, gunLocation.y);
	array[1].position = sf::Vector2f(gunLocation.x + 4*scale, gunLocation.y);
	array[2].position = sf::Vector2f(gunLocation.x + 4*scale, gunLocation.y + 1*scale);
	array[3].position = sf::Vector2f(gunLocation.x, gunLocation.y + 1*scale);

	sf::VertexArray array2(sf::Triangles, 3);
	array2[0].position = sf::Vector2f(gunLocation.x + 1*scale, gunLocation.y);
	array2[1].position = sf::Vector2f(gunLocation.x + 3*scale, gunLocation.y);
	array2[2].position = sf::Vector2f(gunLocation.x + 2*scale, gunLocation.y - 1*scale);
	array2[0].color =  this->fColor;
	array2[1].color =  this->fColor;
	array2[2].color =  this->fColor;


	for(unsigned int i = 0;i < 4;i++){
		array[i].color = this->fColor;
	}

	this->fWindow->draw(array);
	this->fWindow->draw(array2);
}

GunView::~GunView() {
	// TODO Auto-generated destructor stub
}

