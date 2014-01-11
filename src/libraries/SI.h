/**
 * SI.h
 *
 *  Created on: 22 dec. 2013
 *      Author: Ruben
 */

#ifndef SI_H_
#define SI_H_

#include <list>


class SI;


class Entity;
class ScreenEntity;
class View;
class Factory;
class Controller;
class Assets;

class ScreenController;
class EventController;
class MotionController;
class GameController;
class CollisionController;

class Bullet;
class Wall;
class Alien;
class Gun;
class Game;


namespace sf{
	class RenderWindow;
	class Event;
}

#ifndef DOXYGEN_SHOULD_SKIP_THIS

class SI_Controller {
public:
	SI_Controller(SI* fsi);
	ScreenController* screen;
	EventController* event;
	GameController* game;
	MotionController* motion;
	CollisionController* collision;
	virtual ~SI_Controller();
private:
	SI* si;
};

class SI_Model{
public:
	SI_Model(SI* fsi);
	std::list<Gun*>* guns;
	std::list<Alien*>* aliens;
	std::list<Wall*>* walls;
	std::list<Bullet*>* bullets;
	Game* game;
	virtual ~SI_Model();
private:
	std::list<Gun*> fGuns;
	std::list<Alien*> fAliens;
	std::list<Wall*> fWalls;
	std::list<Bullet*> fBullets;
	SI* si;
};

class SI_View{
public:
	SI_View(SI* fsi);
	std::list<View*>* views;
	virtual ~SI_View();
private:
	std::list<View*> fViews;
	SI* si;
};

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

/**
 * @brief The Space Invaders Elements, the connection through the whole system
 */
class SI {
public:
	/**
	 * @brief Constructor for SI
	 */
	SI();

	/**
	 * @brief The Controllers in SI
	 */
	SI_Controller* controller;

	/**
	 * @brief The Models in SI, these are a set of lists containing entities
	 */
	SI_Model* model;

	/**
	 * @brief The Views in SI
	 */
	SI_View* view;

	/**
	 * @brief The Window where the game is rendered
	 */
	sf::RenderWindow* window;

	/**
	 * @brief The Assets Storage
	 */
	Assets* assets;

	/**
	 * @brief Destructor
	 */
	virtual ~SI();
};


#endif /*** SI_H_ */
