#ifndef SOLARSYSTEM_NEPTUNE_H
#define SOLARSYSTEM_NEPTUNE_H

#include "SpaceObject.h"

class Neptune : public SpaceObject {
private:
    float p_phi;

public:
    Neptune(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Neptune();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_NEPTUNE_H
