#include "Saturn.h"

Saturn::Saturn(float radius, SpaceObject *sun, float radius_of_orbit) {
    this->setParent(sun);
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color(168, 148, 82));
    this->setOrbitCenter(sun->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(0.f);
    p_phi = 0.f;
}

Saturn::~Saturn() {

}

void Saturn::update(sf::Time elapsed) {
    p_phi += 0.0002f + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}
