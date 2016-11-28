#ifndef SOLARSYSTEM_SATURN_H
#define SOLARSYSTEM_SATURN_H

#include "AbstractSpaceObject.h"
#include "Asteroid.h"

class Saturn : public AbstractSpaceObject {
private:
    float p_phi;
    std::vector<AbstractSpaceObject*> ringAsteroids;

public:
    Saturn(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Saturn() {};

    void update(sf::Time elapsed);

    std::vector<AbstractSpaceObject*>* getAsteroids() { return &ringAsteroids; };
};

#endif //SOLARSYSTEM_SATURN_H
