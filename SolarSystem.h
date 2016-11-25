#ifndef SOLARSYSTEM_SOLARSYSTEM_H
#define SOLARSYSTEM_SOLARSYSTEM_H

#include "SpaceObject.h"
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

class SolarSystem {
private:
    std::vector<SpaceObject*> spaceObjects;
public:
    SolarSystem(sf::Vector2u space_size);
    ~SolarSystem();

    void update(sf::Time elapsed);
    std::vector<SpaceObject*>* getSpaceObjects();
};


#endif //SOLARSYSTEM_SOLARSYSTEM_H
