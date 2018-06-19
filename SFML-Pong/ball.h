#pragma once
#include <SFML/Graphics.hpp>


class Ball
{
private:
	sf::Vector2f position;

	// A RectangleShape object called ref
	sf::RectangleShape ballShape;

	float xVelocity = .2f;
	float yVelocity = .2f;

public:
	Ball(float startX, float startY);

	sf::FloatRect getPosition();

	sf::RectangleShape getShape();

	float getXVelocity();

	void reboundSides();

	void reboundBatOrTop();

	void hitBottom();

	void update();

};