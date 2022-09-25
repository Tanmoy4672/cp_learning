#include <iostream>
#include <conio.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    void display1()
    {
        cout << "Id :" << id << endl;
        display();
    }
};

int main()
{
    Student student;
    student.name = "Tanmoy shome";
    student.age = 22;
    student.id = 3095;
    student.display1();
    getch();
}