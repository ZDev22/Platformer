#include "enemy.hpp"
#include "level.hpp"
#include <iostream>

size_t a;
size_t b;

std::vector<std::vector<Level>>& simulateEnemies(sf::RenderWindow& window) {
    std::vector<std::vector<Level>>& newVector = Levels::enemyVector;


    for (size_t a = 0; a < newVector.size(); ++a) {
        for (size_t b = 0; b < newVector[a].size(); ++b) {
            Level& lvl = newVector[a][b];

            if (lvl.X + lvl.size.x >= cameraX && lvl.X <= cameraX + window.getSize().x &&
                lvl.Y + lvl.size.y >= cameraY && lvl.Y <= cameraY + window.getSize().y) {

                switch (lvl.ID) {
                case 5:
                    lvl.X += lvl.temp;
                    break;
                }

                sf::FloatRect enemyHitbox(lvl.X, lvl.Y, lvl.size.x, lvl.size.y);
                if (Levels::enemyTouching(window, enemyHitbox) || Levels::touchingLevel(window, enemyHitbox) == 0) {
                    switch (lvl.ID) {
                    case 5:
                        lvl.temp = -lvl.temp;
                        break;
                    }
                }

                sf::RectangleShape enemy(lvl.size);
                enemy.setPosition(lvl.X - cameraX, lvl.Y - cameraY);
                enemy.setFillColor(sf::Color(lvl.color));

                window.draw(enemy);
            }
        }
    }

    return newVector;
}

bool touchingEnemy(sf::Window& window, sf::FloatRect hitbox) {
    std::vector<std::vector<Level>>& killVector = Levels::enemyVector;

    for (size_t a = 0; a < killVector.size(); ++a) {
        for (size_t b = 0; b < killVector[a].size(); ++b) {
            Level& lvl = killVector[a][b];

            if (lvl.X + lvl.size.x >= cameraX && lvl.X <= cameraX + window.getSize().x && lvl.Y + lvl.size.y >= cameraY && lvl.Y <= cameraY + window.getSize().y) {
                sf::FloatRect enemyHitbox(lvl.X, lvl.Y, lvl.size.x, lvl.size.y);
                if (enemyHitbox.intersects(hitbox)) { return true; }
            }
        }
    }

    return false;
}