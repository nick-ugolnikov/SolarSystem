#include "Menu.h"

Menu::Menu(sf::Vector2u window_size) {
    p_charsize = 40;
    p_font.loadFromFile("../STARWARS.TTF");
    p_planet_name.setFont(p_font);
    p_planet_name.setCharacterSize(p_charsize);
    p_planet_name.setStyle(sf::Text::Regular);
    p_planet_name.setPosition(window_size.x / 2, 30);
    p_planet_name.setOutlineColor(sf::Color::White);
}

void Menu::draw(sf::RenderWindow *window) {
    window->draw(p_planet_name);
}

void Menu::setPlanetName(const char *name) {
    p_planet_name.setString(name);
    sf::FloatRect position = p_planet_name.getGlobalBounds();
    p_planet_name.setOrigin(sf::Vector2f(position.width / 2, position.height / 2));
}

void Menu::setPlanetName(std::string *name) {
    this->setPlanetName(name->c_str());
}
