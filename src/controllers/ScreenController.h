/*
 * ScreenController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef SCREENCONTROLLER_H_
#define SCREENCONTROLLER_H_

#include "../libraries/Controller.h"
#include "../libraries/Utilities.h"
#include <SFML/Window.hpp>
#include <iostream>
#include <memory>
#include "../libraries/view.h"

class ScreenController : public Controller {
public:
	ScreenController(std::list<View*>* views, sf::RenderWindow* window) : fViews(views), fWindow(window){};

	/*
	 * @brief closes the window
	 */
	void closeWindow();

	/*
	 * @brief redraws the whole window
	 */
	void redraw();
	virtual ~ScreenController();
private:
	sf::RenderWindow* fWindow;
	std::list<View*>* fViews;
};

#endif /* SCREENCONTROLLER_H_ */
