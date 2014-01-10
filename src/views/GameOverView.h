/*
 * GameOverView.h
 *
 *  Created on: 25 dec. 2013
 *      Author: Ruben
 */

#ifndef GAMEOVERVIEW_H_
#define GAMEOVERVIEW_H_

#include "../libraries/View.h"
#include "../entities/Game.h"
#include <SFML/Graphics.hpp>

class GameOverView : public View {
public:
	GameOverView(sf::RenderWindow* window, Game* game) : fGame(game), View(window){};
	void draw();
	virtual ~GameOverView();
private:
	Game* fGame;
};

#endif /* GAMEOVERVIEW_H_ */
