#include <iostream>
#include <conio.h>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "Hello Calling..";
    }

    virtual void sendMessage() = 0;
};

class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Karim sent message.";
    }
};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Rahim sent message.";
    }
};

int main()
{
    MobileUser *m;
    Karim k;
    Rahim R;

    m = &k;
    m->sendMessage();

 m = &R;
    m->sendMessage();


    getch();
}