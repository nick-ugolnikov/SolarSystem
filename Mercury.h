#ifndef SOLARSYSTEM_MERCURY_H
#define SOLARSYSTEM_MERCURY_H

#include "AbstractSpaceObject.h"

class Mercury : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Mercury(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Mercury() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_MERCURY_H
