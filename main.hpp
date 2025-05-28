#include "SFML/Graphics.hpp"

using namespace std;

extern short level;

extern float cameraX;
extern float cameraY;

extern sf::Color background;

float tween(float current, float target, float interpolation);