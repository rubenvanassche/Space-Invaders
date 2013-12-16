#include <vector>
#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>

std::string resourcePath(){
	return "/media/psf/Home/documents/school/Gevorderd Programmeren/space-invaders/";
}

int main(int argc, char * argv[])
{
	std::cout << "the address is: " << argv [0] << std::endl;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Space Invaders");


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

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
