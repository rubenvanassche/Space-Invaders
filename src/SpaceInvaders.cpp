#include "libraries/Controller.h"
#include "libraries/Utilities.h"
#include "libraries/Entity.h"
#include "libraries/Factory.h"
#include "libraries/SI.h"

#include "controllers/ScreenController.h"
#include "controllers/MotionController.h"
#include "controllers/EventController.h"
#include "controllers/GameController.h"

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

	si.controller->screen = new ScreenController(si.view->views, &si);
	si.controller->event = new EventController(&si);
	si.controller->motion = new MotionController(si.model->guns, si.model->aliens, si.model->bullets, &si);
	si.controller->game = new GameController(&si);

	si.factory->alien = new AlienFactory(si.model->aliens, si.view->views, &si);
	si.factory->bullet = new BulletFactory(si.model->bullets, si.view->views, &si);
	si.factory->gun = new GunFactory(si.model->guns, si.view->views, &si);
	si.factory->wall = new WallFactory(si.model->walls, si.view->views, &si);

	si.model->game = new Game(&si);

	si.controller->game->start();

    return EXIT_SUCCESS;
}
