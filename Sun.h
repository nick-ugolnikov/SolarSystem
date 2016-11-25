#ifndef SOLARSYSTEM_SUN_H
#define SOLARSYSTEM_SUN_H

#include "SpaceObject.h"

class Sun : public SpaceObject {
public:
    Sun(float radius, sf::Vector2f position);
    ~Sun();

    void update(sf::Time elapsed);

};


#endif //SOLARSYSTEM_SUN_H
