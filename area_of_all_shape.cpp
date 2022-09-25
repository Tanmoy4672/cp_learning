#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double base, height, triArea, r, cirArea;

    cout << "Enter Base : ";
    cin >> base;
    cout << "Enter Height : ";
    cin >> height;

    triArea = (double)1 / 2 * base * height;
    cout << "Area of Triangle : " << triArea << endl;

    cout << "Enter r value :";
    cin >> r;
    cirArea = 3.1416 * r * r;
    cout << "Cicle area : " << cirArea<<endl;

                               getch();
}