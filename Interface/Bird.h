#pragma once
#include "Animal.h"
#include <cstring>

class Bird : public Animal
{
private:
    char name[32];
    int age;
public:
    Bird();
    void sayHello() const;
    void sayAge() const;
};
