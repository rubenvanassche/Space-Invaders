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

	sf::Texture* texture;
	try{
		if(wallLife == 1){
			texture = this->fAssets->getTexture("Resources/Walls/three.png");
		}else if(wallLife == 2){
			texture = this->fAssets->getTexture("Resources/Walls/two.png");
		}else if(wallLife == 3){
			texture = this->fAssets->getTexture("Resources/Walls/one.png");
		}else{
			std::runtime_error("Wall can only have three lives not more, not less");
		}
	}catch(std::runtime_error &e){
		sf::RectangleShape rectangle;
		rectangle.setPosition(wallLocation);
		rectangle.setSize(sf::Vector2f(this->fWall->getWidth(), this->fWall->getHeight()));
		rectangle.setFillColor(sf::Color(255, 255, 255));
		this->fWindow->draw(rectangle);
		return;
	}

	sf::Sprite sprite(*texture);
	sprite.setPosition(wallLocation);
	this->fWindow->draw(sprite);
}

WallView::~WallView() {
	// TODO Auto-generated destructor stub
}

