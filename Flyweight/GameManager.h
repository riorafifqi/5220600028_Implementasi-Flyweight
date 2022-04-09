#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

#include "ObjectFactory.h"

class GameManager
{
	std::string typeArray[3] = { "circle", "triangle", "rectangle" };

public:
	std::string randType();
	void randSize(Object*);
	void randCoord(Object*);
};

