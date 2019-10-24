#pragma once
#include "Product.h"
#include <cstring>

class Fruit : public Product
{
private:
    char* type;
    double weight;
    double pricePerKg;
    void copy(const Fruit& other);
    void erase();
public:
    Fruit();
    Fruit(const Fruit& other);
    Fruit& operator=(const Fruit& other);
    ~Fruit();
    Fruit(const char* type, double weigth, double pricePerKg);
    double weightInKg() const;
    double getPrice() const;
    void printProduct() const;
};
