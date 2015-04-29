#ifndef COORDINATES_HEADER
#define COORDINATES_HEADER

#include <iostream>

class Coordinates
{
public:
	int x;
	int y;
	int width;
	int height;
	char* title;

public:
	Coordinates();
	Coordinates(int x, int y, int width, int height, char* title);
	~Coordinates();

};



#endif