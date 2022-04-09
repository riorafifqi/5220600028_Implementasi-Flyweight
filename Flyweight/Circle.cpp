#include "Circle.h"

using namespace std;
Circle::Circle()
{
    type = "circle";
}
std::string Circle::getType()
{
    return type;
}

void Circle::setSize(int r)
{
    3.14 * r * r;
}

void Circle::setSize(int, int)
{
}

int Circle::getSize()
{
    return size;
}

void Circle::setCoord(int x, int y)
{
    coord_x = x;
    coord_y = y;
}

int Circle::getCoord_x()
{
    return coord_x;
}

int Circle::getCoord_y()
{
    return coord_y;
}

void Circle::enableObject()
{
    status = true;
}

void Circle::disableObject()
{
    status = false;
}

bool Circle::getStatus()
{
    return status;
}

void Circle::draw()
{
    cout << "Drawing " << getType() << " with size : " << getSize() << " on coordinate " << coord_x << "," << coord_y << endl;
}
