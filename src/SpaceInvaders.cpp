#include "libraries/Controller.h"
#include "libraries/Utilities.h"
#include "libraries/Entity.h"
#include "libraries/Factory.h"
#include "libraries/Assets.h"
#include "libraries/SI.h"

#include "controllers/ScreenController.h"
#include "controllers/MotionController.h"
#include "controllers/EventController.h"
#include "controllers/GameController.h"
#include "controllers/CollisionController.h"

#include "views/StartScreenView.h"
#include "views/AlienView.h"
#include "views/BulletView.h"
#include "views/GunView.h"
#include "views/WallView.h"

#include "entities/Game.h"

#include <vector>
#include <iostream>


int main(int argc, char * argv[]){
	// Create The Space Invaders Element
	SI si;
	si.controller = new SI_Controller(&si);
	si.model = new SI_Model(&si);
	si.view = new SI_View(&si);
	si.window = new sf::RenderWindow(sf::VideoMode(600, 400), "Space Invaders");
	si.assets = new Assets();

	// Add the controllers to screen
	si.controller->screen = new ScreenController(&si);
	si.controller->event = new EventController(&si);
	si.controller->motion = new MotionController(&si);
	si.controller->game = new GameController(&si);
	si.controller->collision = new CollisionController(&si);

	// Add the game entity as a start
	si.model->game = new Game(&si);

	// And here we go
	si.controller->game->start();

    return EXIT_SUCCESS;
}
