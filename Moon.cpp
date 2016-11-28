#include "Moon.h"

Moon::Moon(float radius, AbstractSpaceObject *earth, float radius_of_orbit) : p_phi(0.f) {
    this->setParent(earth);
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color(135, 131, 104));
    this->setOrbitCenter(earth->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(p_phi);
    this->setName((char *) "MOON");
}

void Moon::update(sf::Time elapsed) {
    p_phi += 0.006f + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}
