#pragma once
#include <string>
#include <iostream>

class Object
{

public:
	Object();
	virtual std::string getType() = 0;
	
	virtual void setSize(int, int) = 0;
	virtual void setSize(int) = 0;
	virtual int getSize() = 0;

	virtual void setCoord(int, int) = 0;
	virtual int getCoord_x() = 0;
	virtual int getCoord_y() = 0;

	virtual void enableObject() = 0;
	virtual void disableObject() = 0;
	virtual bool getStatus() = 0;

	virtual void draw() = 0;
};

