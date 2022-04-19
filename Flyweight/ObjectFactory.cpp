#include "ObjectFactory.h"

using namespace std;

Object* ObjectFactory::getObject(std::string type)
{
    int count = 0;
    Object* output{}; 
    for (auto const& i : objectList)
    {
        if (type == i->getType())  // if object found
        {
            cout << "found similar object" << endl;
            if (i->getStatus() == false) // if object founded is disable
            {
                output = i;
                output->enableObject();
                cout << "reusing disable object" << endl;
                break;
                // don't put this to list
            }
            else
                cout << "Object enable, continue iterating" << endl;

        }
        count++;
    }

    if (count >= objectList.size())  // if object not found
    {
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
        objectList.push_back(output);
    }


    /*if (objectMap.find(type) == objectMap.end())   // Kalau gk nemu / gk ada yg disable
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
    }
    output = objectMap.at(type);

    */
    return output;
}

void ObjectFactory::dispList()
{
    cout << endl << "Object List and status" << endl;
    for (auto const& i : objectList)
    {
        cout << i->getType() << " " << i->getStatus() << endl;
    }
}
