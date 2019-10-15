#include <iostream>
#include <iomanip>

using namespace std;

const int NUM = 5;

struct student
{
    int facnum;
    char name[32];
    double marks[NUM];
};

void read_student(student&);
void print_student(const student&);
void sorttable(student a[], int n);
double average(const double*);

void read_student(student& s)
{
    cout << "Faculty number: ";
    cin >> s.facnum;
    cin.sync();
    cout << "Name: ";
    cin.getline(s.name, 32);
    for(int i = 0; i < NUM; i++)
    {
        cout << i << "-th mark: ";
        cin >> s.marks[i];
    }
}

void print_student(const student& stud)
{
    cout << setw(6) << stud.facnum << setw(30) << stud.name;
    for(int i = 0; i < NUM; i++)
    {
        cout << setw(6) << stud.marks[i];
    }
}

double average(const double* a)
{
    double s = 0;
    for(int j = 0; j < NUM; j++)
    {
        s += a[j];
    }
    return s/NUM;
}

void sorttable(student a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int k = i;
        double max = average(a[i].marks);
        for(int j = i + 1; j < n; j++)
        {
            if(average(a[j].marks) > max)
                max = average(a[j].marks);
                k = j;
        }
        student x = a[i];
        a[i] = a[k];
        a[k] = x;
    }
}

int main()
{
    cout << setprecision(2) << fixed;
    student table[30];
    int n;
    do
    {
        cout << "numbers of students: ";
        cin >> n;
    }while(n < 1 || n > 30);
    int i;
    for(i = 0; i <= n - 1; i++)
    {
        read_student(table[i]);
    }

    cout << "Table: \n";
    for(i = 0; i <= n - 1; i++)
    {
        print_student(table[i]);
        cout << endl;
    }

    sorttable(table, n);
    cout << "\n New table: \n";
    for(int i = 0; i <= n - 1; i++)
    {
        print_student(table[i]);
        cout << setw(7) << average(table[i].marks) << endl;
    }

    return 0;
}
