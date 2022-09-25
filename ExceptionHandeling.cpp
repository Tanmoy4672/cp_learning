#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    while (1)
    {
        /* code */

        try
        {
            int num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter Second number: ";
            cin >> num2;

            if (num2 == 0)
            {
                throw -1;
            }

            double result = (double)num1 / num2;
            cout << "Result: " << result;
        }
        catch (...) // put from the throw or
        {
            cout << "Couldn't divide by O"<<endl;
            cout << "Please try again later"<<endl;
        }
    }

    getch();
}