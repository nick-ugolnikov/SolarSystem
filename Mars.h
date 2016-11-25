#ifndef SOLARSYSTEM_MARS_H
#define SOLARSYSTEM_MARS_H

#include "SpaceObject.h"

class Mars : public SpaceObject {
private:
    float p_phi;

public:
    Mars(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Mars();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_MARS_H
