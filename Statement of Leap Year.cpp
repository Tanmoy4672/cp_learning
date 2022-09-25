#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year : ";
    cin>>year;

    if (year%4==0 && year%100 !=0) //in that case year will not follow 100
    {
        cout<<"Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not Leap Year";
    }
    

    getch();
}