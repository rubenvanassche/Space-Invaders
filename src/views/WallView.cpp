/*
 * WallView.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "WallView.h"

void WallView::draw(){
	if(this->fWall->isDead() == true){
		return;
	}

	// Get the starting point
	sf::Vector2f wallLocation = this->fWall->getLocation();


	// get the wall's life
	int wallLife = this->fWall->getLifes();

	if(wallLife == 1){
		sf::Texture texture;
		if (!texture.loadFromFile("Resources/Walls/three.png")){
			std::runtime_error("Resource couldn't be found!");
		}
		sf::Sprite sprite(texture);
		sprite.setPosition(wallLocation);
		this->fWindow->draw(sprite);
	}else if(wallLife == 2){
		sf::Texture texture;
		if (!texture.loadFromFile("Resources/Walls/two.png")){
			std::runtime_error("Resource couldn't be found!");
		}
		sf::Sprite sprite(texture);
		sprite.setPosition(wallLocation);
		this->fWindow->draw(sprite);
	}else if(wallLife == 3){
		sf::Texture texture;
		if (!texture.loadFromFile("Resources/Walls/one.png")){
			std::runtime_error("Resource couldn't be found!");
		}
		sf::Sprite sprite(texture);
		sprite.setPosition(wallLocation);
		this->fWindow->draw(sprite);
	}else{
		std::runtime_error("Wall can only have three lives not more, not less");
	}

}

WallView::~WallView() {
	// TODO Auto-generated destructor stub
}

