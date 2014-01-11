/*
 * ScreenController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef SCREENCONTROLLER_H_
#define SCREENCONTROLLER_H_

#include "../libraries/Controller.h"
#include "../libraries/View.h"
#include <SFML/Window.hpp>

/*
 * @brief The Controller who handles the screen
 */
class ScreenController : public Controller {
public:
	/*
	 * @brief Constructor
	 *
	 * @param si The Space Invaders Element
	 */
	ScreenController(SI* si) : Controller(si){};

	/*
	 * @brief closes the window
	 */
	void closeWindow();

	/*
	 * @brief redraws the whole window
	 */
	void redraw();

	/*
	 * @brief Draws a view, just one
	 *
	 * @param view The view to draw
	 */
	void draw(View &view);

	virtual ~ScreenController();
};

#endif /* SCREENCONTROLLER_H_ */
