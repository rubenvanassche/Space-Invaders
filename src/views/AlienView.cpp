/*
 * AlienView.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "AlienView.h"

void AlienView::draw(){
	// If the Alien is dead, do not draw
	if(this->fAlien->isDead()){
		return;
	}

	// Get the starting point
	sf::Vector2f alienLocation = this->fAlien->getLocation();

	sf::Texture* texture = nullptr;

	if(this->fAlien->getType() == RUSSEL){
		try{
			if(this->fAlien->getTickTock() == 0){
				texture = this->fAssets->getTexture("Resources/Aliens/Russel/open.png");
			}else{
				texture = this->fAssets->getTexture("Resources/Aliens/Russel/closed.png");
			}
		}catch( std::runtime_error &e){
			this->drawAlternative();
			return;
		}
	}else if(this->fAlien->getType() == DOUG){
		try{
			if(this->fAlien->getTickTock() == 0){
				texture = this->fAssets->getTexture("Resources/Aliens/Doug/open.png");
			}else{
				texture = this->fAssets->getTexture("Resources/Aliens/Doug/closed.png");
			}
		}catch( std::runtime_error &e){
			this->drawAlternative();
			return;
		}
	}else if(this->fAlien->getType() == MUNTZ){
		try{
			if(this->fAlien->getTickTock() == 0){
				texture = this->fAssets->getTexture("Resources/Aliens/Muntz/open.png");
			}else{
				texture = this->fAssets->getTexture("Resources/Aliens/Muntz/closed.png");
			}
		}catch( std::runtime_error &e){
			this->drawAlternative();
			return;
		}
	}else if(this->fAlien->getType() == CARL){
		try{
			if(this->fAlien->getTickTock() == 0){
				texture = this->fAssets->getTexture("Resources/Aliens/Carl/open.png");
			}else{
				texture = this->fAssets->getTexture("Resources/Aliens/Carl/closed.png");
			}
		}catch( std::runtime_error &e){
			this->drawAlternative();
			return;
		}
	}else{
		std::runtime_error("Unknown Alien Type!");
	}

	sf::Sprite sprite(*texture);
	sprite.setPosition(alienLocation);
	this->fWindow->draw(sprite);
}

void AlienView::drawAlternative(){
	sf::CircleShape circle(this->fAlien->getHeight()/2);
	circle.setPosition(this->fAlien->getLocation());
	circle.setFillColor(sf::Color(255, 255, 255));
	this->fWindow->draw(circle);
}

AlienView::~AlienView() {
	// TODO Auto-generated destructor stub
}

