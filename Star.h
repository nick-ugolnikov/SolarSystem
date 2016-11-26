#ifndef SOLARSYSTEM_STAR_H
#define SOLARSYSTEM_STAR_H

#include "SpaceObject.h"

class Star : public SpaceObject {
private:
    sf::Uint8 p_alpha;
    bool p_flag;
    sf::Int32 p_cd;

public:
    Star(float radius, sf::Vector2f position);
    ~Star();

    void update(sf::Time elapsed);

};

#endif //SOLARSYSTEM_STAR_H
