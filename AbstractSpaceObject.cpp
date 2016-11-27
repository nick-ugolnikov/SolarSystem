#include "AbstractSpaceObject.h"

sf::CircleShape AbstractSpaceObject::getShape() {
    return shape;
}

void AbstractSpaceObject::setRadius(float radius) {
    shape.setRadius(radius);
}

void AbstractSpaceObject::setPosition(sf::Vector2f position) {
    shape.setPosition(position);
}

void AbstractSpaceObject::setOrigin(sf::Vector2f origin) {
    shape.setOrigin(origin);
}

void AbstractSpaceObject::setColor(sf::Color color) {
    shape.setFillColor(color);
}

void AbstractSpaceObject::rotate(float angle) {
    shape.rotate(angle);
}

sf::Vector2f AbstractSpaceObject::getPosition() {
    return shape.getPosition();
}

void AbstractSpaceObject::moveOnOrbit(float phi) {
    float x = p_radius_of_orbit * std::cos(phi) + p_parent->getPosition().x;
    float y = p_radius_of_orbit * std::sin(phi) + p_parent->getPosition().y;

    shape.setPosition(sf::Vector2f(x, y));
}

void AbstractSpaceObject::setOrbitRadius(float radius) {
    p_radius_of_orbit = radius;
}

void AbstractSpaceObject::setOrbitCenter(sf::Vector2f center) {
    p_center_of_orbit = center;
}

void AbstractSpaceObject::setParent(AbstractSpaceObject *parent) {
    p_parent = parent;
}

void AbstractSpaceObject::setName(char *name) {
    p_name = std::string(name);
}

const char * AbstractSpaceObject::getName() {
    return p_name.c_str();
}
