#pragma once
#include "Object.h"
#include <iostream>
#include <string>

class Rectangle : public Object
{
	std::string type = "rectangle";
	int size;
	int coord_x, coord_y;
	bool status;
public:
	Rectangle();
	std::string getType();

	void setSize(int, int);
	void setSize(int);
	int getSize();

	void setCoord(int, int);
	int getCoord_x();
	int getCoord_y();

	void enableObject();
	void disableObject();
	bool getStatus();

	void draw();
};

