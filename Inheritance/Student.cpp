#include "Student.h"
#include "Person.h"

void Student::copy(const Student& other)
{
    this->fn = new char[strlen(other.fn) + 1];
    strcpy(this->fn, other.fn);
    this->gpa = other.gpa;
}
void Student::erase()
{
    delete [] this->fn;
}

Student::Student() : Person()
{
    this->fn = new char[1];
    strcpy(this->fn, "12345");
    this->gpa = 6.0;
}

Student::Student(const Student& other) : Person(other)
{
    this->copy(other);
}

Student::~Student()
{
    this->erase();
}

Student& Student::operator=(const Student& other)
{
    if(this != & other)
    {
        Person::operator=(other);
        this->erase();
        this->copy(other);
    }
    return *this;
}

Student::Student(const char* name, const char* ucn, bool gender, int age, const char* fn, double gpa) : Person(name, ucn, gender, age)
{
    this->fn = new char[strlen(fn) + 1];
    strcpy(this->fn, fn);
    this->gpa = gpa;
}
