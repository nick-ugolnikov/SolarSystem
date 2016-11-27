#include "Neptune.h"

Neptune::Neptune(float radius, AbstractSpaceObject *sun, float radius_of_orbit) {
    this->setParent(sun);
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color(67, 130, 232));
    this->setOrbitCenter(sun->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(0.f);
    this->setName((char *) "NEPTUNE");
    p_phi = 0.f;
}

void Neptune::update(sf::Time elapsed) {
    p_phi += 0.00007f + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}
