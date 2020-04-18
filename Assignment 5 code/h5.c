#include <stdio.h>

enum stuff1
{
    Blue = 1,
    Red = 2,
    Yellow = 3,
    Orange = 4
};

enum stuff2
{
    Ten = 10,
    Twenty = 20
};

//Q2
int Q2()
{

    int x = Red;
    printf("%d", x = 30);
    printf("%d", x * 2);
    printf("%d", stuff1(x * 2));

    printf("%d", Blue + Red);
    printf("%d", Blue * Red);
    printf("%d", Blue + Ten);
    printf("%d", Twenty / Red);
    printf("%d", Ten * Twenty);

    printf("%d", Twenty / Ten);
    printf("%d", (Orange + Blue) & Red);
    printf("%d", Yellow + Ten ^ 1);
    printf("%d", Blue * 18);
    printf("%d", Orange << Twenty);

    int thing = Orange + Twenty + 7;
    int *intArray[Twenty];
    return 0;
};

//Q3
int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}};

int Q3_1()
{
    for (int k = 0; k < 10000; k++)
    {

        for (int i = 0; i < 2; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                printf("%d ", disp[i][j]);

                if (j == 2)
                {

                    printf("\n");
                }
            }
        }
    }
};

int Q3_2()
{

    int *ip = NULL;
    ip = &disp;

    for (int k = 0; k < 10000; k++)
    {

        int *temp;
        temp = ip;

        for (int i = 0; i < 8; i++)
        {

            if (!(i == 0))
            {
                temp++;
            }

            printf("%d", *temp);

            if (i == 3)
            {

                printf("\n");
            }

            if (i == 7)
            {

                printf("\n");
                printf("\n");
            }
        }
    }
};