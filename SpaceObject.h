#ifndef SOLARSYSTEM_SPACEOBJECT_H
#define SOLARSYSTEM_SPACEOBJECT_H

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/System/Time.hpp>
#include <cmath>

class SpaceObject {
private:
    sf::CircleShape shape;

    float p_radius_of_orbit;
    sf::Vector2f p_center_of_orbit;
    SpaceObject *p_parent;

public:
    SpaceObject();
    virtual ~SpaceObject();

    void setRadius(float radius);
    void setPosition(sf::Vector2f position);
    void setOrbitRadius(float radius);
    void setOrbitCenter(sf::Vector2f center);
    sf::Vector2f getPosition();
    void setOrigin(sf::Vector2f origin);
    void setColor(sf::Color color);
    void setParent(SpaceObject *parent);
    void moveOnOrbit(float phi);
    void rotate(float angle);
    virtual void update(sf::Time elapsed) = 0;

    sf::CircleShape getShape();
};


#endif //SOLARSYSTEM_SPACEOBJECT_H
