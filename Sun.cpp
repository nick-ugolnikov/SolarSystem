#include "Sun.h"

Sun::Sun(float radius, sf::Vector2f position) {
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setPosition(position);
    this->setColor(sf::Color::Yellow);
}

Sun::~Sun() {

}

void Sun::update(sf::Time elapsed) {
    this->rotate(0.05f * elapsed.asMilliseconds());
}
