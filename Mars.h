#ifndef SOLARSYSTEM_MARS_H
#define SOLARSYSTEM_MARS_H

#include "AbstractSpaceObject.h"

class Mars : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Mars(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Mars() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_MARS_H
