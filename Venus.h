#ifndef SOLARSYSTEM_VENUS_H
#define SOLARSYSTEM_VENUS_H

#include "AbstractSpaceObject.h"

class Venus : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Venus(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Venus() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_VENUS_H
