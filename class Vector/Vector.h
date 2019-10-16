#pragma once
#include <iostream>

using namespace std;

class Vector
{
private:
    int* elements;
    size_t numberOfElems;
    size_t capacity;
    void resize();
    void copy(const Vector& other);
    void erase();
public:
    Vector();
    Vector(const Vector& other);
    void push(size_t element, size_t index);
    void pop(size_t index);
    void push_back(size_t element);
    void pop_back();
    void push_front(size_t element);
    void pop_front();
    int get(size_t index) const;
    bool isEmpty() const;
    size_t getSize() const;
    void print() const;
    Vector& operator=(const Vector& other);
    ~Vector();
    Vector operator+(const Vector& other);
    Vector& operator+=(const Vector& other);
    bool operator<=(const Vector& other);
};
