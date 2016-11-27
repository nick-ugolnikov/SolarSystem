#ifndef SOLARSYSTEM_SOLARSYSTEM_H
#define SOLARSYSTEM_SOLARSYSTEM_H

#include "AbstractSpaceObject.h"
#include "Sun.h"
#include "Mercury.h"
#include "Venus.h"
#include "Earth.h"
#include "Moon.h"
#include "Mars.h"
#include "Jupiter.h"
#include "Saturn.h"
#include "Uranus.h"
#include "Neptune.h"
#include "Star.h"

#include <vector>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class SolarSystemHandler {
private:
    bool p_paused;
    std::vector<AbstractSpaceObject*> spaceObjects;
public:
    SolarSystemHandler(sf::Vector2u space_size);
    ~SolarSystemHandler();

    bool isPaused();
    void pause();
    void resume();
    void update(sf::Time elapsed);
    void draw(sf::RenderWindow *window);

    AbstractSpaceObject* getSpaceObject(sf::Vector2f in_point);
};


#endif //SOLARSYSTEM_SOLARSYSTEM_H
