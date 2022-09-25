#include "myfirstclass.h"
#include<iostream>
using namespace std;
MyFirstClass::MyFirstClass()
{
    cout<<"Inside Constructor"<<endl;
}
MyFirstClass :: ~MyFirstClass()
{
    cout<<"Inside Destructor";
}

void MyFirstClass ::Display()
{
cout<<"Inside the display function."<<endl;
}

