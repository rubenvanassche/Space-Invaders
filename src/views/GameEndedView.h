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

class GameEndedView : public View {
public:
	GameEndedView(sf::RenderWindow* window, Assets* assets, Game* game, bool won) : fGame(game), fWon(won), View(window, assets){};
	void draw();
	virtual ~GameEndedView();
private:
	Game* fGame;
	bool fWon;
};

#endif /* GAMEOVERVIEW_H_ */
