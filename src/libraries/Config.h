/*
 * Config.h
 *
 *  Created on: 21 dec. 2013
 *      Author: Ruben
 */

#ifndef CONFIG_H_
#define CONFIG_H_


class ScreenController;
class MotionController;
class EventController;
namespace sf{
	class RenderWindow;
}

class Config {
public:
	Config(){};
	void setWindow(sf::RenderWindow* window){this->fWindow = window;};
	void setScreenController(ScreenController* screenController){this->fScreenController = screenController;};
	void setMotionController(MotionController* motionController){this->fMotionController = motionController;};
	void setEventController(EventController* eventController){this->fEventController = eventController;};
	void setScreenSize(int* width, int* height){this->fScreenWidth = width; this->fScreenHeight = height;};
	sf::RenderWindow* window(){return this->fWindow;};
	ScreenController* screenController(){return this->fScreenController;};
	MotionController* motionController(){return this->fMotionController;};
	EventController* eventController(){return this->fEventController;};
	int screenWidth(){return *(this->fScreenWidth);};
	int screenHeight(){return *(this->fScreenHeight);};
	virtual ~Config();
private:
	sf::RenderWindow* fWindow = nullptr;
	ScreenController* fScreenController = nullptr;
	MotionController* fMotionController = nullptr;
	EventController* fEventController = nullptr;
	int* fScreenWidth = nullptr;
	int* fScreenHeight = nullptr;
};

#endif /* CONFIG_H_ */
