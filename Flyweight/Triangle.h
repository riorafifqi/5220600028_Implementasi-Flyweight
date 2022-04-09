#pragma once
#include "Object.h"
#include <iostream>

class Triangle : public Object
{
	std::string type = "triangle";
	int size;
	int coord_x, coord_y;
	bool status;
public:
	Triangle();
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

