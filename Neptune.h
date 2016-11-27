#ifndef SOLARSYSTEM_NEPTUNE_H
#define SOLARSYSTEM_NEPTUNE_H

#include "AbstractSpaceObject.h"

class Neptune : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Neptune(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Neptune() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_NEPTUNE_H
