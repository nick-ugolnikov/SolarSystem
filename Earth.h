#ifndef SOLARSYSTEM_EARTH_H
#define SOLARSYSTEM_EARTH_H

#include "SpaceObject.h"

class Earth : public SpaceObject {
private:
    float p_phi;

public:
    Earth(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Earth();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_EARTH_H
