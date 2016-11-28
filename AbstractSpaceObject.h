#ifndef SOLARSYSTEM_SPACEOBJECT_H
#define SOLARSYSTEM_SPACEOBJECT_H

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/System/Time.hpp>
#include <cmath>
#include <string>

class AbstractSpaceObject {
private:
    sf::CircleShape shape;

    std::string p_name;
    float p_radius_of_orbit;
    AbstractSpaceObject *p_parent;

public:
    AbstractSpaceObject() {};
    virtual ~AbstractSpaceObject() {};

    void setName(char *name);
    const char * getName();
    void setRadius(float radius);
    void setPosition(sf::Vector2f position);
    void setOrbitRadius(float radius);
    void setOrbitCenter(sf::Vector2f center);
    sf::Vector2f getPosition();
    void setOrigin(sf::Vector2f origin);
    void setColor(sf::Color color);
    void setParent(AbstractSpaceObject *parent);
    void moveOnOrbit(float phi);
    void rotate(float angle);
    virtual void update(sf::Time elapsed) = 0;

    sf::CircleShape getShape();
};


#endif //SOLARSYSTEM_SPACEOBJECT_H
