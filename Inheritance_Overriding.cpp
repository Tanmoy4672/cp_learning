#include<iostream>
#include<conio.h>
using namespace std;


class Person
{
public:
     void Display()
     {
        cout<<"I am person class"<<endl;
     }
};

class Student : public Person
{
public:
     void Display()
     {
        cout<<"I am student class"<<endl;
     }
};

class Teacher : public Person
{
public:
     void Display()
     {
        cout<<"I am student Teacher"<<endl;
     }
};

int main()
{
    Student std;
    std.Display();

    Teacher t;
    t.Display();

    Person p;
    p.Display();
    getch();
}