#ifndef SOLARSYSTEM_ASTEROID_H
#define SOLARSYSTEM_ASTEROID_H

#include "AbstractSpaceObject.h"

class Asteroid : public AbstractSpaceObject {
private:
    float p_phi;
    float p_speed;

public:
    Asteroid(float speed, AbstractSpaceObject *saturn, float radius_of_orbit);
    ~Asteroid() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_ASTEROID_H
