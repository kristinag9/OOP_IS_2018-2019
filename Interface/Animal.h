#pragma once
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sayHello() const = 0;
    virtual void sayAge() const = 0;
};
