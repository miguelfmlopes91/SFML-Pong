#include "ball.h"


ball::ball(float startX, float startY)
{
	position.x = startX;
	position.y = startY;


	ballShape.setSize(sf::Vector2f(10, 10));
	ballShape.setPosition(position);
}

sf::FloatRect ball::getPosition()
{
	return ballShape.getGlobalBounds();
}

sf::RectangleShape ball::getShape()
{
	return ballShape;
}

float ball::getXVelocity()
{
	return xVelocity;
}

void ball::reboundSides()
{
	xVelocity = -xVelocity;
}

void ball::reboundBatOrTop()
{
	position.y -= (yVelocity * 30);
	//yVelocity = yVelocity*1.1;
	yVelocity = -yVelocity;
}

void ball::hitBottom()
{
	position.y = 1;
	position.x = 500;
}

void ball::update()
{
	// Update the ball position variables
	position.y += yVelocity;
	position.x += xVelocity;

	// Move the ball and the bat
	ballShape.setPosition(position);
}
