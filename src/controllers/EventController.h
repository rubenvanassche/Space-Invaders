/*
 * EventController.h
 *
 *  Created on: 20 dec. 2013
 *      Author: Ruben
 */

#ifndef EVENTCONTROLLER_H_
#define EVENTCONTROLLER_H_

#include "../libraries/Controller.h"
#include "../libraries/Utilities.h"
#include <SFML/Window.hpp>
#include "MotionController.h"
#include "ScreenController.h"

/*
 * @brief Controller which handles the events within the game
 */
class EventController : public Controller{
public:
	EventController(ScreenController* screenController, MotionController* motionController) : fScreenController(screenController), fMotionController(motionController){};

	/*
	 * @brief records an user defined event
	 */
	void record(sf::Event event);

	virtual ~EventController();
private:
	ScreenController* fScreenController;
	MotionController* fMotionController;
};

#endif /* EVENTCONTROLLER_H_ */
