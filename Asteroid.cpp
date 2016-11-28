#include "Asteroid.h"

Asteroid::Asteroid(float speed, AbstractSpaceObject *saturn, float radius_of_orbit) {
    this->setParent(saturn);
    this->setRadius(0.5f);
    this->setOrigin(sf::Vector2f(0.5f, 0.5f));
    this->setColor(sf::Color(135, 131, 104));
    this->setOrbitCenter(saturn->getPosition());
    this->setOrbitRadius(radius_of_orbit);
    this->moveOnOrbit(0.f);
    this->setName((char *) "ASTEROID");
    p_phi = 0.f;
    p_speed = speed;
}

void Asteroid::update(sf::Time elapsed) {
    p_phi += p_speed / 100 + elapsed.asSeconds() / 10;
    if (p_phi > 360.f)
        p_phi = 0.f;

    this->moveOnOrbit(p_phi);
}