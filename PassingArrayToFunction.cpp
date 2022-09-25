#include <iostream>
#include <conio.h>
using namespace std;

void Display(int num[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << "Number " << i << " :" <<num[i]<< endl;
    }
}

int main()
{
    int num[5] = {3, 4, 5, 6, 7};
    Display(num, 5);
}