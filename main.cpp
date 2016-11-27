#include <SFML/Graphics.hpp>
#include <stdlib.h>

#include "Menu.h"
#include "SolarSystemHandler.h"

int main()
{
    std::srand(time(0));
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;
    // create the window
    sf::RenderWindow window(sf::VideoMode(960, 540), "SolarSystemHandler", sf::Style::Default, settings);
    sf::Clock clock;
    Menu menu(window.getSize());
    SolarSystemHandler ss(window.getSize());
    AbstractSpaceObject *founded;
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // check the type of the event...
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;

                    // key pressed
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Space) {
                        // space key is pressed: pause / resume
                        ss.isPaused() ? ss.resume() : ss.pause();
                    }
                    break;

                case sf::Event::MouseMoved:
                    founded = ss.getSpaceObject(window.mapPixelToCoords(sf::Mouse::getPosition(window)));
                    if (founded) {
                        menu.setPlanetName(founded->getName());
                    }
                    else {
                        menu.setPlanetName("");
                    }
                    break;

                    // we don't process other types of events
                default:
                    break;
            }
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        ss.draw(&window);
        menu.draw(&window);

        // end the current frame
        window.display();

        // update world
        sf::Time elapsed = clock.restart();
        ss.update(elapsed);
    }

    return 0;
}