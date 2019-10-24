#include "Fruit.h"
#include "Product.h"

void Fruit::copy(const Fruit& other)
{
    this->type = new char[strlen(other.type) + 1];
    strcpy(this->type, other.type);
    this->weight = other.weight;
    this->pricePerKg = other.pricePerKg;
}
void Fruit::erase()
{
    delete [] this->type;
}

Fruit::Fruit()
{
    this->type = new char[1];
    strcpy(this->type, "");
    this->weight = 0;
    this->pricePerKg = 0;
}

Fruit::Fruit(const Fruit& other)
{
    this->copy(other);
}
Fruit& Fruit::operator=(const Fruit& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

Fruit::~Fruit()
{
    this->erase();
}

Fruit::Fruit(const char* type, double weight, double pricePerKg)
{
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
    this->weight = weight;
    this->pricePerKg = pricePerKg;
}

double Fruit::weightInKg () const
{
    return this->weight / 1000.0;
}

double Fruit::getPrice() const
{
        return this->weightInKg() * this->pricePerKg;
}

void Fruit::printProduct() const
{
    cout << "Fruit " << this->type << " with weight: " << this->weight << " and price per kilos " << this->pricePerKg <<
    " costs " << this->getPrice() << endl;
}
