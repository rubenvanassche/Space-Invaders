#include <vector>
#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <exception>
#include "models/Gun.h"
#include "views/GunView.h"
#include "Game.h"

std::string resourcePath(){
	return "/media/psf/Home/documents/school/Gevorderd Programmeren/space-invaders/Resources";
}

int main(int argc, char * argv[])
{
	/*
	std::cout << "the address is: " << argv [0] << std::endl;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Space Invaders");

    Gun g(sf::Vector2f(100,10), 10);
    GunView gV(&g);

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
        }

        // Clear screen
        window.clear();

        window.draw(gV.draw());

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
    */
	Game game(1);
	game.run();
}
