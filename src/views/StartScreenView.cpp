/**
 * StartScreenView.cpp
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#include "StartScreenView.h"

void StartScreenView::draw(){
	sf::Font* font;

	try{
		font = this->fAssets->getFont("Resources/aircruiserlight.ttf");
	}catch(std::runtime_error &e){
		std::cout << "SPACE INVADERS"<< std::endl;
		std::cout << "--------------"<< std::endl;
		std::cout << "* Level : "<< this->fGame->getLevel() << " *" << std::endl;
		std::cout << "||||||||||||||"<< std::endl;
		std::cout << "Space: Start Game"<< std::endl;
		std::cout << "Left: Lower Level"<< std::endl;
		std::cout << "Right: Raise Level"<< std::endl;
		return;
	}

	sf::Text name("Space Invaders", *font, 50);
	sf::Vector2f nameLocation((this->fGame->getWidth() - name.getLocalBounds().width)/2, 40);
	name.setPosition(nameLocation);

	std::string levelString = std::to_string(this->fGame->getLevel());
	sf::String levelSFString("Level ");
	levelSFString += levelString;
	sf::Text level(levelSFString, *font, 30);
	sf::Vector2f levelLocation((this->fGame->getWidth() - level.getLocalBounds().width)/2, 110);
	level.setPosition(levelLocation);

	sf::Text instructions("Space: Start Game | Left: Lower Level | Right: Raise Level", *font, 15);
	sf::Vector2f instructionsLocation((this->fGame->getWidth() - instructions.getLocalBounds().width)/2, this->fGame->getHeight() - 30);
	instructions.setPosition(instructionsLocation);

	this->fWindow->draw(name);
	this->fWindow->draw(level);
	this->fWindow->draw(instructions);
}

StartScreenView::~StartScreenView() {
	// TODO Auto-generated destructor stub
}

