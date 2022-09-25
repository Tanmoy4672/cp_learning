#include <iostream>
#include <conio.h>
using namespace std;

class SemesterFee
{
public:
    const int semesterFee;
    const int tutionFee;
    int examFee;

    SemesterFee(int sem, int tut, int exam)
        : semesterFee(sem), tutionFee(tut)
    {
        cout<<semesterFee<<endl;
        cout<<tutionFee<<endl;
        examFee = exam;
        cout<<examFee;
    }
};

int main()
{

    SemesterFee sem(15000,5000,500);

    getch();
}
