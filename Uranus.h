#ifndef SOLARSYSTEM_URANUS_H
#define SOLARSYSTEM_URANUS_H

#include "AbstractSpaceObject.h"

class Uranus : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Uranus(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Uranus() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_URANUS_H
