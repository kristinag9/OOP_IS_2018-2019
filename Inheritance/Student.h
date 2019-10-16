#pragma once
#include "Person.h"

class Student : public Person
{
private:
    char* fn;
    double gpa;
    void copy(const Student& other);
    void erase();
public:
    Student();
    Student(const Student& other);
    ~Student();
    Student& operator=(const Student& other);
    Student(const char* name, const char* ucn, bool gender, int age, const char* fn, double gpa);

    friend ostream& operator<<(ostream& os, const Student& student)
    {
        os << (Person)student;
        os << student.fn << endl;
        os << student.gpa << endl;

        return os;
    }

    /*friend istream& operator>>(istream& is, const Student& student)
    {
        is >> (Person&)student;
        is >> student.fn;
        is >> student.gpa;

        return is;
    }*/
};
