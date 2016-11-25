#include <SFML/Graphics.hpp>
#include <stdlib.h>

#include "SolarSystem.h"

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;
    // create the window
    sf::RenderWindow window(sf::VideoMode(960, 540), "SolarSystem", sf::Style::Default, settings);
    sf::Clock clock;

    std::srand(time(0));
    SolarSystem ss(window.getSize());
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        for (auto it = ss.getSpaceObjects()->begin(); it < ss.getSpaceObjects()->end(); ++it) {
            window.draw((*it)->getShape());
        }

        // end the current frame
        window.display();

        // update world
        sf::Time elapsed = clock.restart();
        ss.update(elapsed);
    }

    return 0;
}