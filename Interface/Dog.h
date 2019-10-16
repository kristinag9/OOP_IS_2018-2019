#pragma once
#include "Animal.h"
#include <cstring>

class Dog : public Animal
{
private:
    char* name;
    int age;

    void copy(const Dog& other);
    void erase();
public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void sayHello() const;
    void sayAge() const;
};
