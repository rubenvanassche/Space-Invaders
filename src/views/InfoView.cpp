/*
 * InfoView.cpp
 *
 *  Created on: 23 dec. 2013
 *      Author: Ruben
 */

#include "InfoView.h"

void InfoView::draw(){
	sf::Font font;
	if (!font.loadFromFile("Resources/aircruiserlight.ttf")){
		std::runtime_error("Couldn't find resource");
	}


	std::string score = std::to_string(this->fGun->getScore());
	std::string level = std::to_string(this->fGun->getLifes());
	sf::String info("Score: ");
	info += score;
	info += "  Lifes: ";
	info += level;
	sf::Text infotext(info, font, 15);
	infotext.setPosition(10, 10);

	this->fWindow->draw(infotext);
}

InfoView::~InfoView() {
	// TODO Auto-generated destructor stub
}

