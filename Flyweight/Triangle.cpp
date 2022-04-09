#include "Triangle.h"

using namespace std;
Triangle::Triangle()
{
	type = "triangle";
}
string Triangle::getType()
{
	return type;
}

void Triangle::setSize(int a, int t)
{
	size = 0.5 * a * t;
}

void Triangle::setSize(int)
{
}

int Triangle::getSize()
{
	return size;
}

void Triangle::setCoord(int x, int y)
{
	coord_x = x;
	coord_y = y;
}

int Triangle::getCoord_x()
{
	return coord_x;
}

int Triangle::getCoord_y()
{
	return coord_y;
}

void Triangle::enableObject()
{
	status = true;
}

void Triangle::disableObject()
{
	status = false;
}

bool Triangle::getStatus()
{
	return status;
}

void Triangle::draw()
{
	cout << "Drawing " << getType() << " with size : " << getSize() << " on coordinate " << coord_x << "," << coord_y << endl;
}
