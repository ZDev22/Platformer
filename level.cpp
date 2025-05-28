#include "level.hpp"
#include "levels.hpp"
#include <iostream>
#include "enemy.hpp"

size_t i;
size_t j;

namespace Levels {
    vector<vector<Level>> levelVector;
    vector<vector<Level>> enemyVector;

    void createLevelObject(short ID, short X, short Y, sf::Vector2f size, sf::Color color, float temp, sf::Vector2f startXY, sf::Vector2f endXY, bool movingPlatform) {
        if (levelVector.empty()) { levelVector.push_back(vector<Level>()); }
        if (enemyVector.empty()) { enemyVector.push_back(vector<Level>()); }

        Level object;
        object.ID = ID;
        object.X = X;
        object.Y = Y;
        object.size = size;
        object.color = color;
        object.temp = temp;
        object.start = startXY;
        object.end = endXY;
        object.movingPlatform = movingPlatform;

        if (ID <= 4) { levelVector.back().push_back(object); }
        else { enemyVector.back().push_back(object); }
    }

    void createLevel() { createLevels(); }

    void renderLevel(sf::RenderWindow& window) {
        for (i = 0; i < levelVector.size(); ++i) {
            for (j = 0; j < levelVector[i].size(); ++j) {
                Level& lvl = levelVector[i][j];

                if (lvl.X + lvl.size.x >= cameraX && lvl.X <= cameraX + window.getSize().x && lvl.Y + lvl.size.y >= cameraY && lvl.Y <= cameraY + window.getSize().y) {

                    if (lvl.movingPlatform) {
                        lvl.X += lvl.temp;
                        if (lvl.X >= lvl.end.x || lvl.X <= lvl.start.x) { lvl.temp = -lvl.temp; }
                    }

                    sf::RectangleShape object(lvl.size);
                    object.setPosition(lvl.X - cameraX, lvl.Y - cameraY);
                    object.setFillColor(sf::Color(lvl.color));

                    window.draw(object);
                }
            }
        }
        enemyVector = simulateEnemies(window);
    }

    short touchingLevel(sf::Window& window, sf::FloatRect collider) {
        for (i = 0; i < levelVector.size(); ++i) {
            for (j = 0; j < levelVector[i].size(); ++j) {
                Level& Lcollider = levelVector[i][j];
                if (Lcollider.X + Lcollider.size.x >= cameraX && Lcollider.X <= cameraX + window.getSize().x && Lcollider.Y + Lcollider.size.y >= cameraY && Lcollider.Y <= cameraY + window.getSize().y) {
                    sf::FloatRect levelCollider(Lcollider.X, Lcollider.Y, Lcollider.size.x, Lcollider.size.y);
                    if (levelCollider.intersects(collider)) { return Lcollider.ID; }
                }
            }
        }
        return 0;
    }

    bool enemyTouching(sf::Window& window, sf::FloatRect collider) {
        for (i = 0; i < levelVector.size(); ++i) {
            for (j = 0; j < levelVector[i].size(); ++j) {
                Level& Lcollider = levelVector[i][j];
                if (Lcollider.ID == 2) {
                    if (Lcollider.X + Lcollider.size.x >= cameraX && Lcollider.X <= cameraX + window.getSize().x && Lcollider.Y + Lcollider.size.y >= cameraY && Lcollider.Y <= cameraY + window.getSize().y) {
                        sf::FloatRect levelCollider(Lcollider.X, Lcollider.Y, Lcollider.size.x, Lcollider.size.y);
                        if (levelCollider.intersects(collider)) { return true; }
                    }
                }
            }
        }
        return false;
    }
}