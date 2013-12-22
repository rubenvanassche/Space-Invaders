#include <vector>
#include <iostream>
/*
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <exception>
#include <memory>
#include "entities/Gun.h"
#include "views/GunView.h"
#include "entities/Alien.h"
#include "views/AlienView.h"
#include "Game.h"
#include "libraries/Utilities.h"¬
*/
#include "includes.h"
#include "libraries/SI.h"

std::string resourcePath(){
	return "/media/psf/Home/documents/school/Gevorderd Programmeren/space-invaders/Resources";
}

int main(int argc, char * argv[])
{
	/*
	std::cout << "the address is: " << argv [0] << std::endl;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Space Invaders");
    std::shared_ptr<sf::RenderWindow> windowPtr(&window);

    Gun g(sf::Vector2f(100,10), 10);
    GunView gV(windowPtr.get(), &g);
    g.appendView(&gV);

    Alien a(sf::Vector2f(100,100));
    AlienView aV(windowPtr.get(), &a);
    a.appendView(&aV);

    sf::Clock clock;
    sf::Time second = sf::seconds(1.0);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;

        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
            // Escape pressed : exit
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
				g.move(util::LEFT);
			}

			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
				g.move(util::RIGHT);
			}

        }

        //std::cout << clock.getElapsedTime().asSeconds() <<std::endl;

        if(clock.getElapsedTime() >= second){
        	clock.restart();
        	a.move(util::LEFT);
        }

        // Clear screen
        //window.clear();

        // Update the window
        window.display();
    }
	*/

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

	si.controller->game->start();

    return EXIT_SUCCESS;
}
