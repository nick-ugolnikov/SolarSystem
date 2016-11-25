#include <stdlib.h>
#include "Star.h"

Star::Star(float radius, sf::Vector2f position) {
    this->setRadius(radius);
    this->setOrigin(sf::Vector2f(radius, radius));
    this->setColor(sf::Color::White);
    this->setPosition(position);
    p_alpha = 0;
    p_flag = true;
}

Star::~Star() {

}

void Star::update(sf::Time elapsed) {
    if (p_flag) {
        p_alpha += std::rand() % 2;
        if (p_alpha > 250) {
            p_alpha = 250;
            p_flag = false;
        }
    }
    else {
        p_alpha -= std::rand() % 2;
        if (p_alpha < 2) {
            p_alpha = 1;
            p_flag = true;
        }
    }

    this->setColor(sf::Color(250, 250, 250, p_alpha));
}