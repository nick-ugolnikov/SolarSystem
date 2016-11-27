#ifndef SOLARSYSTEM_SATURN_H
#define SOLARSYSTEM_SATURN_H

#include "AbstractSpaceObject.h"

class Saturn : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Saturn(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Saturn() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_SATURN_H
