#include "GameManager.h"

using namespace std;
string GameManager::randType()
{
	int temp;

	temp = rand() % 3;

	return typeArray[temp];
}

void GameManager::randSize(Object* o)
{
	int temp_a, temp_b;

	temp_a = rand() % 11;
	temp_b = rand() % 11;

	if (o->getType() == "circle")
	{
		o->setSize(temp_a);
	}
	else
	{
		o->setSize(temp_a, temp_b);
	}
}

void GameManager::randCoord(Object* o)
{
	int temp_x, temp_y;

	temp_x = rand() % 11;
	temp_y = rand() % 11;

	o->setCoord(temp_x, temp_y);
}

int main()
{
	GameManager game;
	Object* test;
	ObjectFactory of;

	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		cout << i << " draw" << endl;
		test = of.getObject(game.randType());
		game.randSize(test);
		game.randCoord(test);
		test->draw();
		cout << endl;
	}

	of.dispList();

	return 0;
}
