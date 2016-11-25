#ifndef SOLARSYSTEM_SATURN_H
#define SOLARSYSTEM_SATURN_H

#include "SpaceObject.h"

class Saturn : public SpaceObject {
private:
    float p_phi;

public:
    Saturn(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Saturn();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_SATURN_H
