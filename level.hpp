#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "main.hpp"
#include <vector>

struct Level {
    short ID;
    float X;
    float Y;
    sf::Vector2f size;
    sf::Color color;
    float temp;
    sf::Vector2f start;
    sf::Vector2f end;
    bool movingPlatform;
};

namespace Levels {
    extern vector<vector<Level>> levelVector;
    extern vector<vector<Level>> enemyVector;

    void createLevel();
    void createLevelObject(short ID, short X, short Y, sf::Vector2f size, sf::Color color, float temp, sf::Vector2f startXY, sf::Vector2f endXY, bool movingPlatform);
    short touchingLevel(sf::Window& window, sf::FloatRect collider);
    bool enemyTouching(sf::Window& window, sf::FloatRect collider);
    void renderLevel(sf::RenderWindow& window);
}

#endif