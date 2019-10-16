#include "Programmer.h"
#include "Person.h"

Programmer::Programmer() : Person()
{
    strcpy(this->employer, "SAP");
    this->salary = 0;
    this->workingHours = 0;
}

Programmer::Programmer(const char* name, const char* ucn, bool gender, int age, const char* employer, double salary, int workingHours) : Person(name, ucn, gender, age)
{
    strcpy(this->employer, employer);
    this->salary = salary;
    this->workingHours = workingHours;
}

void Programmer::incrementAge()
{
    this->age += 2;
}
