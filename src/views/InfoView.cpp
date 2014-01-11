/*
 * InfoView.cpp
 *
 *  Created on: 23 dec. 2013
 *      Author: Ruben
 */

#include "InfoView.h"

void InfoView::draw(){
	std::string score = std::to_string(this->fGun->getScore());
	std::string level = std::to_string(this->fGun->getLifes());
	sf::String info("Score: ");
	info += score;
	info += "  Lives: ";
	info += level;

	sf::Font* font;

	try{
		font = this->fAssets->getFont("Resources/aircruiserlight.ttf");
	}catch(std::runtime_error &e){
		std::cout << info.toAnsiString() << std::endl;
		return;
	}

	sf::Text infotext(info, *font, 15);
	infotext.setPosition(10, 10);

	this->fWindow->draw(infotext);
}

InfoView::~InfoView() {
	// TODO Auto-generated destructor stub
}

