#include <iostream>
#include <time.h>
using namespace std;

//Q1
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

int Q1_enum(void)
{
    for (int i = 0; i < 100000; i++)
    {
        int x = Red;
        x = 30;
        (x * 2);

        (Blue + Red);
        (Blue * Red);
        (Blue + Ten);
        (Twenty / Red);
        (Ten * Twenty);

        (Twenty / Ten);
        ((Orange + Blue) & Red);
        (Yellow + Ten ^ 1);
        (Blue * 18);
        (Orange << Twenty);

        int thing = Orange + Twenty + 7;
    }
    return 0;
};

int Q1_int(void)
{
    for (int i = 0; i < 100000; i++)
    {
        int Blue = 0;
        int Red = 1;
        int Yellow = 2;
        int Orange = 3;
        int Ten = 10;
        int Twenty = 20;

        int x = 1;
        x = 30;
        (x * 2);

        (Blue + Red);
        (Blue * Red);
        (Blue + Ten);
        (Twenty / Red);
        (Ten * Twenty);

        (Twenty / Ten);
        ((Orange + Blue) & Red);
        (Yellow + Ten ^ 1);
        (Blue * 18);
        (Orange << Twenty);

        int thing = Orange + Twenty + 7;
    }
    return 0;
};

//Q3
int Q3_static(void)
{
    static int array[100];
    return 0;
};

int Q3_stack(void)
{
    int array[100];
    return 0;
};
int Q3_heap(void)
{
    int *array = new int[100];
    return 0;
};

int main(void)
{
    clock_t tStart = clock();
    for (int i = 0; i < 100000; i++)
    {
        Q3_static();
    }
    printf("Time taken Static: %f\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    tStart = clock();
    for (int i = 0; i < 100000; i++)
    {
        Q3_stack();
    }
    printf("Time taken Stack: %f\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    tStart = clock();
    for (int i = 0; i < 100000; i++)
    {
        Q3_heap();
    }
    printf("Time taken Heap: %f\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
};