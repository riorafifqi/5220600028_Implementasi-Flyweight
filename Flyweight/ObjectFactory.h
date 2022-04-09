#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Object.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

class ObjectFactory
{
	std::map<std::string, Object*> objectMap;

public:
	Object* getObject(std::string);
	void dispHash();
};

