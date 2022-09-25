#include <iostream>
#include "myclassdemo.h"
using namespace std;

int main()
{

    //when we try to call to constant function we need to make it all constant
    const MyClassDemo ob1;
    ob1.display();


    MyClassDemo ob2;
    ob2.display1();
    return 0;
}
