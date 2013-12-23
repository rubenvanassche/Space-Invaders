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

class ScreenController : public Controller {
public:
	ScreenController(SI* si) : Controller(si){};

	/*
	 * @brief closes the window
	 */
	void closeWindow();

	/*
	 * @brief redraws the whole window
	 */
	void redraw();
	virtual ~ScreenController();
};

#endif /* SCREENCONTROLLER_H_ */
