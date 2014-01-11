/*
 * GameOverView.cpp
 *
 *  Created on: 25 dec. 2013
 *      Author: Ruben
 */

#include "GameEndedView.h"


void GameEndedView::draw(){
	sf::String info = "";
	if(this->fWon == true){
		info = "You Won!";
	}else{
		info = "Game Over!";
	}

	sf::Font* font;

	try{
		font = this->fAssets->getFont("Resources/aircruiserlight.ttf");
	}catch(std::runtime_error &e){
		std::cout << info.toAnsiString() << "  ---  " << "Press Space to go back to start" << std::endl;
		return;
	}

	sf::Text infotext(info, *font, 40);
	infotext.setPosition((this->fGame->getWidth() - infotext.getLocalBounds().width)/2, (this->fGame->getHeight()-40)/2);

	sf::Text instructions("Space: Go Back To Start", *font, 15);
	sf::Vector2f instructionsLocation((this->fGame->getWidth() - instructions.getLocalBounds().width)/2, this->fGame->getHeight() - 30);
	instructions.setPosition(instructionsLocation);

	this->fWindow->draw(instructions);
	this->fWindow->draw(infotext);
}

GameEndedView::~GameEndedView() {
	// TODO Auto-generated destructor stub
}

