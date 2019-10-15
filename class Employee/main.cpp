#include <iostream>
#include <cstring>

using namespace std;

class date
{
private:
    int month;
    int day;
    int year;
public:
    date();
    date(int, int, int);
    date(const date&);
    void print() const;
};

/*
date::date()
{
    month = 1;
    day = 1;
    year = 2000;
}
date::date(int x, int y, int z)
{
    month = x;
    day = y;
    year = z;
}
*/

date::date()
{
    cout << "date()\n";
    month = 1;
    day = 1;
    year = 2000;
}

date::date(int x, int y, int z): month(x), day(y), year(z)
{
}
date::date(const date& r)
{
    month = r.month;
    day = r.day;
    year = r.year;
}

void date::print() const
{
    cout << month << '-' << day << '-' << year << endl;
}

class employee
{
private:
    char name[28];
    date emplDate;
public:
    employee(char* = "Default", int = 1, int = 1, int = 2000);
    employee(const employee&);
    void print() const;
};
employee::employee(char* n, int x, int y, int z): emplDate(date(x,y,z))
{
    strcpy(name, n);
}
employee::employee(const employee& r):emplDate(r.emplDate)
{
    strcpy(name, r.name);
    //emplDate = r.emplDate;
}
void employee::print() const
{
    cout << name << " ";
    emplDate.print();
}

int main()
{
    employee e("Name1", 2,8,1994);
    e.print();
    cout << endl;
    employee e1("Name2", 1,7);
    e1.print();
    cout << endl;
    employee e2("Name3", 3);
    e2.print();
    cout << endl;
    employee e3("Name4");
    e3.print();
    cout << endl;
    employee e4;
    e4.print();

    return 0;
}

