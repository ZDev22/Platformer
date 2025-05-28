#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "Level.hpp"

std::vector<std::vector<Level>>& simulateEnemies(sf::RenderWindow& window);
bool touchingEnemy(sf::Window& window, sf::FloatRect hitbox);

#endif