#pragma once
#include "Product.h"
#include <cstring>

class Beer : public Product
{
private:
    char* brand;
    char* bottleType;
    double price;

    void copy(const Beer& other);
    void erase();
public:
    Beer();
    Beer(const Beer& other);
    Beer& operator=(const Beer& other);
    ~Beer();
    Beer(const char* _brand, const char* _bottleType, double _price);

    double getPrice() const;
    void printProduct() const;
};

