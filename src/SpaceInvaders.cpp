#include "libraries/Controller.h"
#include "libraries/Utilities.h"
#include "libraries/Entity.h"
#include "libraries/Factory.h"
#include "libraries/SI.h"

#include "controllers/ScreenController.h"
#include "controllers/MotionController.h"
#include "controllers/EventController.h"
#include "controllers/GameController.h"
#include "controllers/CollisionController.h"

#include "factories/Gunfactory.h"
#include "factories/BulletFactory.h"
#include "factories/WallFactory.h"
#include "factories/AlienFactory.h"

#include "views/StartScreenView.h"
#include "views/AlienView.h"
#include "views/BulletView.h"
#include "views/GunView.h"
#include "views/WallView.h"

#include "entities/Game.h"

#include <vector>
#include <iostream>


int main(int argc, char * argv[]){
	SI si;
	si.controller = new SI_Controller(&si);
	si.model = new SI_Model(&si);
	si.view = new SI_View(&si);
	si.factory  = new SI_Factory(&si);
	si.window = new sf::RenderWindow(sf::VideoMode(600, 400), "Space Invaders");

	si.controller->screen = new ScreenController(&si);
	si.controller->event = new EventController(&si);
	si.controller->motion = new MotionController(&si);
	si.controller->game = new GameController(&si);
	si.controller->collision = new CollisionController(&si);

	si.factory->alien = new AlienFactory(&si);
	si.factory->bullet = new BulletFactory(&si);
	si.factory->gun = new GunFactory(&si);
	si.factory->wall = new WallFactory(&si);

	si.model->game = new Game(&si);

	si.controller->game->start();


	sf::Vector2f point1(260, 60);
	sf::Vector2f point2(306, 88);
	Size size(24, 17, point1);
	if(size.in(point2)){
		std::cout << "TRUE" << std::endl;
	}else{
		std::cout << "False" << std::endl;
	}

    return EXIT_SUCCESS;
}
