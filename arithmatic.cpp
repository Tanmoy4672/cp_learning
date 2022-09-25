#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;

    cout << showpoint; // it will show the decimal value of result.
    cout << setprecision(10);
    float sum = num1 + num2;
    cout << "Sum : " << sum << endl;

    cout << noshowpoint;
    float sub = num1 - num2;
    cout << "Subtraction : " << sub << endl;

    float multi = num1 * num2;
    cout << "Sum : " << multi << endl;

    double div = (float)num1 / num2; // type casting
    cout << "Divition : " << div << endl;

    float rim = num1 % num2;
    cout << "Rimender : " << rim << endl;

    getch();
}