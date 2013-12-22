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
class View;
class Factory;
class Controller;

class ScreenController;
class EventController;
class MotionController;
class GameController;

class AlienFactory;
class BulletFactory;
class GunFactory;
class WallFactory;

class Bullet;
class Wall;
class Alien;
class Gun;


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
	virtual ~SI_Controller();
private:
	SI* si;
};

class SI_Model{
public:
	SI_Model(SI* fsi);
	std::list<Entity*>* guns;
	std::list<Entity*>* aliens;
	std::list<Entity*>* walls;
	std::list<Entity*>* bullets;
	virtual ~SI_Model();
private:
	std::list<Entity*> fGuns;
	std::list<Entity*> fAliens;
	std::list<Entity*> fWalls;
	std::list<Entity*> fBullets;
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

class SI_Factory{
public:
	SI_Factory(SI* fsi);
	AlienFactory* alien;
	BulletFactory* bullet;
	GunFactory* gun;
	WallFactory* wall;
	virtual ~SI_Factory();
private:
	SI* si;
};

class SI {
public:
	SI();
	SI_Controller* controller;
	SI_Factory* factory;
	SI_Model* model;
	SI_View* view;
	sf::RenderWindow* window;
	virtual ~SI();
};


#endif /* SI_H_ */
