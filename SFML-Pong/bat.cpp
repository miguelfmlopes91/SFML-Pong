#include "Bat.h"

// This the constructor and it is called when we create an object
bat::bat(float startX, float startY)
{
	position.x = startX;
	position.y = startY;

	batShape.setSize(sf::Vector2f(50, 5));
	batShape.setPosition(position);
}
sf::FloatRect bat::getPosition()
{
	return batShape.getGlobalBounds();
}

sf::RectangleShape bat::getShape()
{
	return batShape;
}

void bat::moveLeft()
{
	position.x -= batSpeed;
}

void bat::moveRight()
{
	position.x += batSpeed;
}

void bat::update()
{
	batShape.setPosition(position);
}