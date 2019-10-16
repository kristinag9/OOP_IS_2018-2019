#include "Dog.h"

void Dog::copy(const Dog& other)
{
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
    this->age = other.age;
}
void Dog::erase()
{
    delete [] this->name;
}

Dog::Dog()
{
    this->name = new char[1];
    strcpy(this->name, "Archi");
    this->age = 0;
}

Dog::Dog(const Dog& other)
{
    this->copy(other);
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

Dog::~Dog()
{
    this->erase();
}

void Dog::sayHello() const
{
    cout << "Woof! My name is " << this->name << "!" << endl;
}
void Dog::sayAge() const
{
    cout << "Dog's age: " << this->age << endl;
}


