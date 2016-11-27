#ifndef SOLARSYSTEM_SUN_H
#define SOLARSYSTEM_SUN_H

#include "AbstractSpaceObject.h"

class Sun : public AbstractSpaceObject {
public:
    Sun(float radius, sf::Vector2f position);
    ~Sun() {};

    void update(sf::Time elapsed);

};


#endif //SOLARSYSTEM_SUN_H
