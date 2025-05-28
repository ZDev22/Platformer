#include "level.hpp"
#include "levels.hpp"

void createLevels() {

    Levels::levelVector.clear();

    switch (level) {
    case 1:
        background = sf::Color(13, 169, 186);
        Levels::createLevelObject(1, 50, 600, sf::Vector2f(500.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 600, 600, sf::Vector2f(500.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1100, 500, sf::Vector2f(50.f, 150.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1250, 500, sf::Vector2f(300.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1600, 500, sf::Vector2f(300.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2000, 450, sf::Vector2f(100.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2200, 450, sf::Vector2f(100.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2450, 450, sf::Vector2f(100.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2750, 450, sf::Vector2f(100.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2850, 350, sf::Vector2f(50.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2750, 250, sf::Vector2f(50.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2850, 150, sf::Vector2f(50.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2750, 50, sf::Vector2f(50.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 2850, -50, sf::Vector2f(50.f, 100.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(3, 2960, -150, sf::Vector2f(150.f, 50.f), sf::Color(240, 189, 5), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 3150, -250, sf::Vector2f(100.f, 200.f), sf::Color(255, 17, 0), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(4, 3300, -150, sf::Vector2f(100.f, 50.f), sf::Color(255, 255, 255), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        break;
    case 2:
        background = sf::Color(11, 114, 125);
        Levels::createLevelObject(1, 50, 600, sf::Vector2f(500.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 350, 550, sf::Vector2f(100.f, 50.f), sf::Color(255, 17, 0), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 550, 600, sf::Vector2f(100.f, 50.f), sf::Color(255, 17, 0), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 650, 600, sf::Vector2f(500.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 800, 500, sf::Vector2f(100.f, 150.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 900, 500, sf::Vector2f(450.f, 50.f), sf::Color(255, 17, 0), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(3, 1000, 450, sf::Vector2f(50.f, 50.f), sf::Color(240, 189, 5), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1350, 500, sf::Vector2f(100.f, 150.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1500, 650, sf::Vector2f(200.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1300, 750, sf::Vector2f(200.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1200, 550, sf::Vector2f(50.f, 500.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1200, 1000, sf::Vector2f(1000.f, 50.f), sf::Color(8, 207, 8), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(3, 1700, 980, sf::Vector2f(50.f, 20.f), sf::Color(240, 189, 5), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 1900, 800, sf::Vector2f(50.f, 200.f), sf::Color(255, 17, 0), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(5, 2050, 962, sf::Vector2f(40.f, 40.f), sf::Color(255, 17, 0), .6f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(4, 2200, 800, sf::Vector2f(100.f, 50.f), sf::Color(255, 255, 255), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        break;
    case 3:
        background = sf::Color(71, 71, 71);
        Levels::createLevelObject(1, 50, 600, sf::Vector2f(200.f, 50.f), sf::Color(112, 112, 112), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(2, 125, 550, sf::Vector2f(50.f, 50.f), sf::Color(156, 37, 2), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 500, 600, sf::Vector2f(400.f, 50.f), sf::Color(112, 112, 112), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(5, 600, 562, sf::Vector2f(40.f, 40.f), sf::Color(156, 37, 2), .8f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(3, 1000, 500, sf::Vector2f(20.f, 20.f), sf::Color(166, 132, 10), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1200, 300, sf::Vector2f(300.f, 50.f), sf::Color(112, 112, 112), 0.f, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), false);
        Levels::createLevelObject(1, 1500, 300, sf::Vector2f(400.f, 50.f), sf::Color(112, 112, 112), 1.f, sf::Vector2f(1500.f, 300.f), sf::Vector2f(2000.f, 300.f), true);
        break;
    }
}