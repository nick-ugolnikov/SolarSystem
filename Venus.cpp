#include "Venus.h"

Venus::Venus(float radius, AbstractSpaceObject *sun, float radius_of_orbit) : p_phi(0.f) {
    this->setParent(sun);
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color(168, 37, 5));
    this->setOrbitCenter(sun->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(p_phi);
    this->setName((char *) "VENUS");
}

void Venus::update(sf::Time elapsed) {
    p_phi += 0.006f + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}
