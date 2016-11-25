#ifndef SOLARSYSTEM_URANUS_H
#define SOLARSYSTEM_URANUS_H

#include "SpaceObject.h"

class Uranus : public SpaceObject {
private:
    float p_phi;

public:
    Uranus(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Uranus();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_URANUS_H
