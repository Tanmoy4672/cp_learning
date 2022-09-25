#include <iostream>
#include <conio.h>
using namespace std;

class Shape
{
public:
    double dim1;
    double dim2;

public:
    Shape(double dim1, double dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    double area()
    {
        return 0;
    }
};

class Triangle : public Shape
{
    // dim1, dim2, area
public:
    Triangle(double dim1, double dim2)
        : Shape(dim1, dim2)
    {
    }
    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};

int main()
{
    Triangle t(10, 20);
    cout << "Trangle Area : " << t.area()<<endl;

/*
    Shape *p;
    Triangle t1(10, 20);

    p = &t1;
    cout<<"Triangle area : "<<p ->area();
*/
    getch();
}