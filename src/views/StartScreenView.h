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

/*
 * @brief View representing the start screen at the bgeiining of the game
 */
class StartScreenView : public View {
public:
	/*
	 * @brief Constructor for the Start Screen View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Game instance
	 */
	StartScreenView(sf::RenderWindow* window, Assets* assets, Game* game) : View(window, assets), fGame(game){};

	/*
	 * @brief Draw the Start Screen
	 */
	void draw();
	virtual ~StartScreenView();
private:
	Game* fGame;
};

#endif /* STARTSCREENVIEW_H_ */
