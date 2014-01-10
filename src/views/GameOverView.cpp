/*
 * GameOverView.cpp
 *
 *  Created on: 25 dec. 2013
 *      Author: Ruben
 */

#include "GameOverView.h"


void GameOverView::draw(){
	sf::Font font;
	if (!font.loadFromFile("Resources/aircruiserlight.ttf")){
		std::runtime_error("Couldn't find resource");
	}

	sf::String info("Game Over!");
	sf::Text infotext(info, font, 40);
	infotext.setPosition((this->fGame->getWidth() - infotext.getLocalBounds().width)/2, (this->fGame->getHeight()-40)/2);

	this->fWindow->draw(infotext);
}

GameOverView::~GameOverView() {
	// TODO Auto-generated destructor stub
}

