#include "Bird.h"

Bird::Bird()
{
    strcpy(this->name, "Tweetie");
    this->age = 0;
}

void Bird::sayHello() const
{
    cout << "Tweet! My name is " << this->name << "!" << endl;
}

void Bird::sayAge() const
{
    cout << "Bird's age: " << this->age << endl;
}
