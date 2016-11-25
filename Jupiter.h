#ifndef SOLARSYSTEM_JUPITER_H
#define SOLARSYSTEM_JUPITER_H

#include "SpaceObject.h"

class Jupiter : public SpaceObject {
private:
    float p_phi;

public:
    Jupiter(float radius, SpaceObject* sun, float radius_of_orbit);
    ~Jupiter();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_JUPITER_H
