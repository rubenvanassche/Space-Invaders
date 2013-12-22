/*
 * EventController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef EVENTCONTROLLER_H_
#define EVENTCONTROLLER_H_

#include "../libraries/Controller.h"
#include <SFML/Window.hpp>
#include "../controllers/ScreenController.h"
#include "../controllers/MotionController.h"

/*
 * @brief Controller which handles the events within the game
 */
class EventController : public Controller{
public:
	EventController(SI* si) : Controller(si){};

	/*
	 * @brief records an user defined event during the game
	 */
	void record(sf::Event event);

	/*
	 * @brief records an user defined event during the start screen
	 */
	int startScreen(sf::Event event);

	virtual ~EventController();

};

#endif /* EVENTCONTROLLER_H_ */
