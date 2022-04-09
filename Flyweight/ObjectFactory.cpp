#include "ObjectFactory.h"

using namespace std;

Object* ObjectFactory::getObject(std::string type)
{
    Object* output{};
    if (objectMap.find(type) == objectMap.end())
    {
        // type not found create new object
        cout << "Object not found. creating new object" << endl;
        if (type == "rectangle")
        {
            output = new Rectangle();
            output->enableObject();
        }
        else if (type == "triangle")
        {
            output = new Triangle();
            output->enableObject();
        }
        else if (type == "circle")
        {
            output = new Circle();
            output->enableObject();
        }
        else {
            cout << "object type not found" << endl;
        }
        // send new object to hashmap
        objectMap.insert(pair<string, Object*>(type, output));
    }
    else
    {
        cout << "reusing old object" << endl;
        //output = objectMap.at(type);
    }
    output = objectMap.at(type);


    //cout << output->getType() << endl;

    return output;

}

void ObjectFactory::dispHash()
{
    size_t count = objectMap.size();
    for (pair<string, Object*> pair : objectMap)
    {
        cout << pair.first << endl;
    }
}
