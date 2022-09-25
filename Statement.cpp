// nested if

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    for (int i = 1; i <= 100; i += 2)
    {
        if (i == 11)
        {
            continue;
        }
        cout << i << endl;
    }

    getch();
}