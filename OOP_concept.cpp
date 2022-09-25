#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    Student(int no, string studentName)
    {
        rollNo = no;
        name = studentName;
    }

    void Display()
    {
        cout << rollNo << "      " << name << endl;
    }

    void setValue(int no, string nam)
    {
        rollNo = no;
        name = nam;
    }
};

int main()
{
    Student Rahim(3095, "Rahim Ullah");
    //   Rahim.setValue(3095, "Rahim Ullah");
    Rahim.Display();

    Student Karim(3098, "Karim Sarif");
    //   Karim.setValue(3098, "Karim Sarif");
    Karim.Display();

    Student lota(2000, "Lota Sarkar");
    lota.Display();

    getch();
}
