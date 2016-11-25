#ifndef SOLARSYSTEM_VENUS_H
#define SOLARSYSTEM_VENUS_H

#include "SpaceObject.h"

class Venus : public SpaceObject {
private:
    float p_phi;

public:
    Venus(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Venus();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_VENUS_H
