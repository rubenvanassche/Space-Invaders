/**
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

/**
 * @brief View representing a GameEnded Screen
 */
class GameEndedView : public View {
public:
	/**
	 * @brief Constructor for the GameEnded View
	 *
	 * @param window A pointer to the window instance
	 * @param assets A pointer to the assets instance
	 * @param alien A pointer to the Game instance
	 * @param won A bool telling the view if it is a game won or game over view
	 */
	GameEndedView(sf::RenderWindow* window, Assets* assets, Game* game, bool won) : fGame(game), fWon(won), View(window, assets){};

	/**
	 * @brief Draw the GameEnded Screen
	 */
	void draw();

	virtual ~GameEndedView();
private:
	Game* fGame;
	bool fWon;
};

#endif /** GAMEOVERVIEW_H_ */
