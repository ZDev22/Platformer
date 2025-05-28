#include "player.hpp"
#include "level.hpp"
#include "enemy.hpp"
#include <iostream>

float X = 50.f;
float speedX = 0.f;
float Y = 500.f;
float speedY = 0.f;
float speed = .5f;
float friction = .9f;
float gravity = .5f;
short cyoteFrames = 0;

void kill() { X = 50.f, Y = 500.f; cameraX = -450.f; cameraY = 100.f; }

void simulatePlayer(sf::RenderWindow& window) {
    sf::RectangleShape player;
    player.setSize(sf::Vector2f(30.f, 30.f));
    player.setFillColor(sf::Color(255, 185, 0));

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && cyoteFrames < 8) { speedY = -10.f; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { speedX += speed; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { speedX -= speed; }

    cyoteFrames++;
    speedY += gravity;
    speedX *= friction;

    X += speedX;
    sf::FloatRect playerHitbox(X, Y, 30.f, 30.f);
    switch (Levels::touchingLevel(window, playerHitbox)) {
    case 1:
        X -= speedX;
        speedX = 0.f;
        break;
    case 2:
        kill();
        break;
    case 3:
        speedY = -18.f;
        break;
    case 4:
        level++;
        Levels::createLevel();
        kill();
        break;
    }

    Y += speedY;
    playerHitbox = sf::FloatRect(X, Y, 30.f, 30.f);
    switch (Levels::touchingLevel(window, playerHitbox)) {
    case 1:
        if (speedY > 0) { cyoteFrames = 0; }
        Y -= speedY;
        speedY = 0.f;
        break;
    case 2:
        kill();
        break;
    case 3:
        speedY = -18.f;
        break;
    case 4:
        level++;
        Levels::createLevel();
        kill();
        break;
    }

    if (Y > 2500.f) { kill(); }
    else if (touchingEnemy(window, playerHitbox)) { kill(); }

    cameraX = tween(cameraX, X - 500.f, 1.1f);
    cameraY = tween(cameraY, Y - 350.f, 1.55f);

    player.setPosition(X - cameraX, Y - cameraY);
    window.draw(player);
}