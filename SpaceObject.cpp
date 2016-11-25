#include "SpaceObject.h"

SpaceObject::SpaceObject() {

}

SpaceObject::~SpaceObject() {

}

sf::CircleShape SpaceObject::getShape() {
    return shape;
}

void SpaceObject::setRadius(float radius) {
    shape.setRadius(radius);
}

void SpaceObject::setPosition(sf::Vector2f position) {
    shape.setPosition(position);
}

void SpaceObject::setOrigin(sf::Vector2f origin) {
    shape.setOrigin(origin);
}

void SpaceObject::setColor(sf::Color color) {
    shape.setFillColor(color);
}

void SpaceObject::rotate(float angle) {
    shape.rotate(angle);
}

sf::Vector2f SpaceObject::getPosition() {
    return shape.getPosition();
}

void SpaceObject::moveOnOrbit(float phi) {
    float x = p_radius_of_orbit * std::cos(phi) + p_parent->getPosition().x;
    float y = p_radius_of_orbit * std::sin(phi) + p_parent->getPosition().y;

    shape.setPosition(sf::Vector2f(x, y));
}

void SpaceObject::setOrbitRadius(float radius) {
    p_radius_of_orbit = radius;
}

void SpaceObject::setOrbitCenter(sf::Vector2f center) {
    p_center_of_orbit = center;
}

void SpaceObject::setParent(SpaceObject *parent) {
    p_parent = parent;
}
