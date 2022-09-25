#include <iostream>
#include <conio.h>
using namespace std;

template <class myTemplete, class myTemplete1>
myTemplete add(myTemplete num1, myTemplete1 num2)
{
    return num1 + num2;
};

int main()
{
    cout<<add(10.45, 30);
    getch();
}