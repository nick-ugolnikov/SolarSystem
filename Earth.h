#ifndef SOLARSYSTEM_EARTH_H
#define SOLARSYSTEM_EARTH_H

#include "AbstractSpaceObject.h"

class Earth : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Earth(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Earth() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_EARTH_H
