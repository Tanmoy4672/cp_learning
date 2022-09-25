#include "myclassdemo.h"
#include<iostream>
using namespace std;
void MyClassDemo ::display() const
{
    cout<<"I am calling form constant display"<<endl;
}

void MyClassDemo ::display1()
{
    cout<<"I am calling form non-constant display"<<endl;
}

