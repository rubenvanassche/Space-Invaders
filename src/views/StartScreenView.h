/*
 * StartScreenView.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef STARTSCREENVIEW_H_
#define STARTSCREENVIEW_H_

#include "../entities/Game.h"
#include "../libraries/View.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>

class GameController;

class StartScreenView : public View {
public:
	StartScreenView(sf::RenderWindow* window, Game* game) : View(window), fGame(game){};

	/*
	 * @brief Draw the Gun by returning a VertexArray
	 */
	void draw();
	virtual ~StartScreenView();
private:
	Game* fGame;
};

#endif /* STARTSCREENVIEW_H_ */
