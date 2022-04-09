#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
	type = "rectangle";
}

std::string Rectangle::getType()
{
	return type;
}

void Rectangle::setSize(int panjang, int lebar)
{
	size = panjang * lebar;
}

void Rectangle::setSize(int)
{
}

int Rectangle::getSize()
{
	return size;
}

void Rectangle::setCoord(int x, int y)
{
	coord_x = x;
	coord_y = y;
}

int Rectangle::getCoord_x()
{
	return coord_x;
}

int Rectangle::getCoord_y()
{
	return coord_y;
}

void Rectangle::enableObject()
{
	status = true;
}

void Rectangle::disableObject()
{
	status = false;
}


bool Rectangle::getStatus()
{
	return status;
}

void Rectangle::draw()
{
	cout << "Drawing " << getType() << " with size : " << getSize() << " on coordinate " << coord_x << "," << coord_y << endl;
}