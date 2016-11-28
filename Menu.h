#ifndef SOLARSYSTEM_MENU_H
#define SOLARSYSTEM_MENU_H

#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <string>

class Menu
{
private:
    sf::Uint8 p_charsize;
    sf::Font p_font;
    sf::Text p_planet_name;

public:
    Menu(sf::Vector2u window_size);
    ~Menu() {};

    void setPlanetName(const char *name);
    void setPlanetName(std::string *name);

    void draw(sf::RenderWindow *window);
};

#endif //SOLARSYSTEM_MENU_H
