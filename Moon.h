#ifndef SOLARSYSTEM_MOON_H
#define SOLARSYSTEM_MOON_H

#include "AbstractSpaceObject.h"

class Moon : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Moon(float radius, AbstractSpaceObject* earth, float radius_of_orbit);
    ~Moon() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_MOON_H
