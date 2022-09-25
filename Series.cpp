#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{

    int sum1 = 0, n, sum2 = 0;
    cout << "Enter the last number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << "+";
        // sum1 = sum1 + i;
        cout << pow(i, 5) << "+";
        sum2 = sum2 + pow(i, 5);
    }
    //  cout << sum1<<endl;
    cout << sum2 << endl;

    getch();
}