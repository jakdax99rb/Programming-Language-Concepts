#include <iostream>
using namespace std;

//Q1
int Q1(void)
{

    typedef struct
    {
        int data[50];
        int x;
    } Thing1;

    typedef struct
    {
        int data[50];
        int x;
    } Thing2;

    Thing1 stuff1, stuff2;
    Thing2 other1, other2;

    //Valid because the name of their types match
    stuff1 = stuff2;
    other1 = other2;

    //invalid because the name of their types do not match
    stuff1 = other1;

    return 0;
}

//Q2
enum stuff1
{
    Blue,
    Red,
    Yellow,
    Orange
};

enum stuff2
{
    Ten = 10,
    Twenty = 20
};

int Q2(void)
{

    int x = Red;
    x = 30;
    cout << (x * 2) << endl;
    cout << (stuff1(x * 2)) << endl;

    cout << (Blue + Red) << endl;
    cout << (Blue * Red) << endl;
    cout << (Blue + Ten) << endl;
    cout << (Twenty / Red) << endl;
    cout << (Ten * Twenty) << endl;

    cout << (Twenty / Ten) << endl;
    cout << ((Orange + Blue) & Red) << endl;
    cout << (Yellow + Ten ^ 1) << endl;
    cout << (Blue * 18) << endl;
    cout << (Orange << Twenty) << endl;

    int thing = Orange + Twenty + 7;
    int *intArray[Twenty];

    return 0;
};