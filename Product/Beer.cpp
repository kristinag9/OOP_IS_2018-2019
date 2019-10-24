#include "Product.h"
#include "Beer.h"

void Beer::copy(const Beer& other)
{
    this->brand = new char[strlen(other.brand) + 1];
    strcpy(this->brand, other.brand);
    this->bottleType = new char[strlen(other.bottleType) + 1];
    strcpy(this->bottleType, other.bottleType);
    this->price = other.price;
}
void Beer::erase()
{
    delete [] this->brand;
    delete [] this->bottleType;
}

Beer::Beer()
{
    this->brand = new char[1];
    strcpy(this->brand, "");
    this->bottleType = new char[1];
    strcpy(this->bottleType, "");
    this->price = 0;
}

Beer::Beer(const Beer& other)
{
    this->copy(other);
}

Beer& Beer::operator=(const Beer& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

Beer::~Beer()
{
    this->erase();
}

Beer::Beer(const char* _brand, const char* _bottleType, double _price)
{
    this->brand = new char[strlen(_brand) + 1];
    strcpy(this->brand, _brand);
    this->bottleType = new char[strlen(_bottleType) + 1];
    strcpy(this->bottleType, _bottleType);
    this->price = _price;
}

double Beer::getPrice() const
{
    return this->price;
}

void Beer::printProduct() const
{
    cout << "A beer " << this->brand << " is made of " << this->bottleType << " and costs " << this->price << endl;
}
