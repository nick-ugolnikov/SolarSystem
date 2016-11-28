#include "Uranus.h"

Uranus::Uranus(float radius, AbstractSpaceObject *sun, float radius_of_orbit) : p_phi(0.f) {
    this->setParent(sun);
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color(67, 193, 232));
    this->setOrbitCenter(sun->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(p_phi);
    this->setName((char *) "URANUS");
}

void Uranus::update(sf::Time elapsed) {
    p_phi += 0.0001f + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}
