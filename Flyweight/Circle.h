#pragma once
#include "Object.h"
#include <iostream>
#include <string>

class Circle : public Object
{
	std::string type = "circle";
	int size;
	int coord_x, coord_y;
	bool status;
public:
	Circle();
	std::string getType();

	void setSize(int);
	void setSize(int, int);
	int getSize();

	void setCoord(int, int);
	int getCoord_x();
	int getCoord_y();

	void enableObject();
	void disableObject();
	bool getStatus();

	void draw();
};

