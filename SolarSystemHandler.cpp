#include "SolarSystemHandler.h"

SolarSystemHandler::SolarSystemHandler(sf::Vector2u space_size) : p_paused(false) {
    // create Sun
    spaceObjects.push_back(new Sun(70.f, sf::Vector2f(space_size.x / 2, space_size.y / 2)));
    AbstractSpaceObject* sun = spaceObjects.at(0);
    spaceObjects.push_back(new Mercury(2.5f, sun, 100.f));
    spaceObjects.push_back(new Venus(4.5f, sun, 110.f));
    spaceObjects.push_back(new Earth(5.f, sun, 130.f));
    AbstractSpaceObject* earth = spaceObjects.at(3);
    spaceObjects.push_back(new Moon(1.f, earth, 6.5f));
    spaceObjects.push_back(new Mars(3.f, sun, 150.f));
    spaceObjects.push_back(new Jupiter(13.f, sun, 175.f));
    spaceObjects.push_back(new Saturn(11.f, sun, 220.f));
    Saturn* saturn = (Saturn*)spaceObjects.at(7);
    spaceObjects.insert(spaceObjects.end(), saturn->getAsteroids()->begin(), saturn->getAsteroids()->end());
    spaceObjects.push_back(new Uranus(9.f, sun, 250.f));
    spaceObjects.push_back(new Neptune(8.f, sun, 270.f));

    // add background stars in system
    for (int i = 0; i < 100; ++i) {
        float r = static_cast <float> (std::rand()) / static_cast <float> (RAND_MAX);
        spaceObjects.push_back(new Star(r, sf::Vector2f((std::rand() % space_size.x), (std::rand() % space_size.y))));
    }
}

SolarSystemHandler::~SolarSystemHandler() {
    for (auto it = spaceObjects.begin(); it < spaceObjects.end(); ++it)
        delete (*it);
}

void SolarSystemHandler::update(sf::Time elapsed) {
    if (!p_paused)
        for (auto it = spaceObjects.begin(); it < spaceObjects.end(); ++it)
            (*it)->update(elapsed);
}

bool SolarSystemHandler::isPaused() {
    return p_paused;
}

void SolarSystemHandler::pause() {
    p_paused = true;
}

void SolarSystemHandler::resume() {
    p_paused = false;
}

AbstractSpaceObject *SolarSystemHandler::getSpaceObject(sf::Vector2f in_point) {
    for (auto it = spaceObjects.begin(); it < spaceObjects.end(); ++it) {
        if ((*it)->getShape().getGlobalBounds().contains(in_point))
            return (*it);
    }
    return nullptr;
}

void SolarSystemHandler::draw(sf::RenderWindow *window) {
    for (auto it = spaceObjects.begin(); it < spaceObjects.end(); ++it) {
        window->draw((*it)->getShape());
    }
}
