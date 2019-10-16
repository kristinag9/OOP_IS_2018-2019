#include "Vector.h"

void Vector::resize()
{
    int* tempElem = new int[this->capacity*2 + 1];
    this->capacity = this->capacity*2 + 1;
    for(size_t i = 0; i < numberOfElems; i++)
    {
        tempElem[i] = this->elements[i];
    }
    this->erase();
    this->elements = tempElem;
}
void Vector::erase()
{
    delete [] this->elements;
}
void Vector::copy(const Vector& other)
{
    this->elements = new int[other.capacity];
    this->capacity = other.capacity;
    this->numberOfElems = other.numberOfElems;
    for(size_t i = 0; i <- this->numberOfElems; i++)
    {
        this->elements[i] = other.elements[i];
    }
}

Vector::Vector()
{
    this->numberOfElems = 0;
    this->capacity = 8;
    this->elements = new int[this->numberOfElems];
}

Vector::Vector(const Vector& other)
{
    this->copy(other);
}

void Vector::push(size_t element, size_t index)
{
  this->numberOfElems++;
  if(this->numberOfElems >= this->capacity)
  {
      this->resize();
  }
  for(size_t i = numberOfElems - 1; i > index; i--)
  {
      this->elements[i] = this->elements[i - 1];
  }
  this->elements[index] = element;
}

void Vector::pop(size_t index)
{
    for(size_t i = index; i< this->numberOfElems; i++)
    {
        this->elements[i] = this->elements[i - 1];
    }
    this->numberOfElems--;
}
void Vector::push_back(size_t element)
{
    this->push(element, this->numberOfElems);
}
void Vector::pop_back()
{
    this->pop(this->numberOfElems--);
}

void Vector::push_front(size_t element)
{
    this->push(element, 0);
}

void Vector::pop_front()
{
    this->pop(0);
}

int Vector::get(size_t index) const
{
    return this->elements[index];
}

bool Vector::isEmpty() const
{
    return this->numberOfElems == 0;
}

size_t Vector::getSize() const
{
    return this->numberOfElems;
}

void Vector::print() const
{
    for(size_t i = 0; i < this->numberOfElems; i++)
    {
        cout << this->elements[i] << endl;
    }
}

Vector& Vector::operator=(const Vector& other)
{
    if(this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}
Vector::~Vector()
{
    this->erase();
}
Vector Vector::operator+(const Vector& other)
{
    Vector returnedvector;
    returnedvector.numberOfElems = this->numberOfElems + other.numberOfElems;
    returnedvector.capacity = this->capacity + other.capacity;
    returnedvector.elements = new int[returnedvector.capacity];
    for(size_t i = 0; i < this->numberOfElems; i++)
    {
        returnedvector.elements[i] = this->elements[i];
    }
    for(size_t i = this->getSize(), k = 0; i < returnedvector.getSize(); i++, k++)
    {
        returnedvector.elements[k] = other.elements[k];
    }
    return returnedvector;
}
Vector& Vector::operator+=(const Vector& other)
{
    Vector temp = *this;
    *this = *this + other;
    return *this;
}
bool Vector::operator<=(const Vector& other)
{
    if(this->getSize() == other.getSize())
    {
        for(size_t i = 0; i < this->numberOfElems; i++)
        {
            if(this->elements[i] > other.elements[i])
            {
                return true;
            }
            else if(this->elements[i] < other.elements[i])
            {
                return false;
            }
            return this->getSize() > other.getSize();
        }
    }
}
