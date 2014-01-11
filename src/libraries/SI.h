/*
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


class SI {
public:
	SI();
	SI_Controller* controller;
	SI_Model* model;
	SI_View* view;
	sf::RenderWindow* window;
	Assets* assets;
	virtual ~SI();
};


#endif /* SI_H_ */
