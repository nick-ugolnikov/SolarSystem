#ifndef SOLARSYSTEM_MERCURY_H
#define SOLARSYSTEM_MERCURY_H

#include "SpaceObject.h"

class Mercury : public SpaceObject {
private:
    float p_phi;

public:
    Mercury(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Mercury();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_MERCURY_H
