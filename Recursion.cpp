// n = n * (n-1)!

#include <iostream>
#include <conio.h>
using namespace std;

int Fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * Fact(num - 1);
    }
}

int main()
{
    cout << Fact(4);
    getch();
}