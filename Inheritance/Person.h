#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char* name;
    char ucn[11];
    bool gender;
    void copy(const Person& other);
    void erase();
protected:
    int age;
public:
    Person();
    Person(const Person& other);
    Person& operator=(const Person& other);
    ~Person();
    Person(const char* name, const char* ucn, bool gender, int age);
    void changeName(const char* name);
    void incrementAge();

    friend ostream& operator<<(ostream& os, const Person& person)
    {
        os << person.name << endl;
        os << person.ucn << endl;
        os << person.gender << endl;
        os << person.age << endl;

        return os;
    }

    friend istream& operator>>(istream& is,Person& person)
    {
        is >> person.name;
        is >> person.ucn;
        is >> person.gender;
        is >> person.age;

        return is;
    }
};





