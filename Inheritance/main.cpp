#include "Person.h"
#include "Student.h"
#include "Programmer.h"

int main()
{
    Student s;
    Programmer p;
    s.incrementAge();
    p.incrementAge();
    cout << s;
    cout << p;
    /*Person p;
    cout << p;
    cin >> p;
    */
    return 0;
}

