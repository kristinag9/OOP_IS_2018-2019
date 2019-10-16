#pragma once
#include "Person.h"

class Programmer : public Person
{
private:
    char employer[64];
    double salary;
    int workingHours;
public:
    Programmer();
    Programmer(const char* name, const char* ucn, bool gender, int age, const char* employer, double salary, int workingHours);
    void incrementAge();

    friend ostream& operator<<(ostream& os, const Programmer& programmer)
    {
        os << (Person)programmer;
        os << programmer.employer << endl;
        os << programmer.salary << endl;
        os << programmer.workingHours << endl;

        return os;
    }

    friend istream& operator>>(istream& is, Programmer& programmer)
    {
        is >> (Person&)programmer;
        is >> programmer.employer;
        is >> programmer.salary;
        is >> programmer.workingHours;

        return is;
    }
};
