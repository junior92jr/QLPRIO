#include "Coordinates.h"

Coordinates::Coordinates()
{
	x = 0;
	y = 0;
	width = 0;
	height = 0;
	title = "";
}

Coordinates::Coordinates(int x, int y, int width, int height, char* title)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->title = title;
}

Coordinates::~Coordinates()
{
}