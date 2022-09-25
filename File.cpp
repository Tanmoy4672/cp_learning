#include <fstream>
#include <iostream>
using namespace std;


int main()
{
    ofstream file;
    file.open("student.txt");
    file << "I am tanmoy shome";

    file.close();

    return 0;
}