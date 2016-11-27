#ifndef SOLARSYSTEM_JUPITER_H
#define SOLARSYSTEM_JUPITER_H

#include "AbstractSpaceObject.h"

class Jupiter : public AbstractSpaceObject {
private:
    float p_phi;

public:
    Jupiter(float radius, AbstractSpaceObject* sun, float radius_of_orbit);
    ~Jupiter() {};

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_JUPITER_H
