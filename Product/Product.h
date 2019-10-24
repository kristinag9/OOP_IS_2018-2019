#pragma once
#include <iostream>

using namespace std;

class Product
{
public:
    virtual double getPrice() const = 0;
    virtual void printProduct() const = 0;

    virtual ~Product() {}
};
