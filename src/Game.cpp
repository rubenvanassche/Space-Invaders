/*
 * Game.cpp
 *
 *  Created on: 16 dec. 2013
 *      Author: Ruben
 */

#include "Game.h"

Game::Game(int level){
	this->level = level;

	std::shared_ptr<sf::RenderWindow> windowPtr(new sf::RenderWindow(sf::VideoMode(height, width), "Space Invaders"));
	this->window = windowPtr;
}

void Game::run(){
	this->buildGuns();
	 while (this->window->isOpen())
	    {
	        // Process events
	        sf::Event event;
	        while (window->pollEvent(event))
	        {
	            // Close window : exit
	            if (event.type == sf::Event::Closed) {
	                window->close();
	            }

	            // Escape pressed : exit
	            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
	                window->close();
	            }
	        }

	        // Clear screen
	        window->clear();


	        // Update the window
	        window->display();
	    }
}

void Game::buildGuns(){

}


Game::~Game() {
	// TODO Auto-generated destructor stub
}

