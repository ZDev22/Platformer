#include "main.hpp"
#include "player.hpp"
#include "level.hpp"

float deltaTime;
short level = 3;
float cameraX = 0.f;
float cameraY = 0.f;
sf::Color background;

float tween(float current, float target, float interpolation) { return current + (target - current) * (interpolation * deltaTime); }

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 680), "Chaos");
    window.setFramerateLimit(60);

    sf::Clock clock;

    Levels::createLevel();

    sf::Event event;

    while (window.isOpen()) {
        while (window.pollEvent(event)) { if (event.type == sf::Event::Closed) window.close(); }

        deltaTime = clock.restart().asSeconds();

        window.clear(sf::Color(background));
        Levels::renderLevel(window);
        simulatePlayer(window);
        window.display();
    }

    return 0;
}