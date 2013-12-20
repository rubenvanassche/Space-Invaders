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

class ScreenController : public Controller {
public:
	ScreenController(std::list<Model*>* models, std::list<View*>* views, sf::RenderWindow* window) : Controller(models, views), fWindow(window){};

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
};

#endif /* SCREENCONTROLLER_H_ */
