#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    void setDetails(int rollNo, string name)
    {
        this -> rollNo = rollNo;
       this -> name = name;
    }
    int getRollNo()
    {
        return rollNo;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Student std;
    std.setDetails(3095, "Tanmoy Shome");
    cout<<std.getRollNo()<<endl;
    cout<<std.getName();
    getch();
}