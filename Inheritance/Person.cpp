#include "Person.h"

void Person::copy(const Person& other)
{
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
    strcpy(this->ucn, other.ucn);
    this->gender = other.gender;
    this->age = other.age;
}
void Person::erase()
{
    delete [] this->name;
}

Person::Person()
{
    this->name = new char[1];
    strcpy(this->name, "");
    strcpy(this->ucn, "0001112223");
    this->gender = true;
    this->age = 19;
}

Person::Person(const Person& other)
{
    this->copy(other);
}

Person& Person::operator=(const Person& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

Person::~Person()
{
    this->erase();
}

Person::Person(const char* name, const char* ucn, bool gender, int age)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    strcpy(this->ucn, ucn);
    this->gender = gender;
    this->age = age;
}

void Person::changeName(const char* name)
{
    delete [] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void Person::incrementAge()
{
    this->age++;
}
