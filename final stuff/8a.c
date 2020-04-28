
void fun(void)
{
    int j = -3;
    for (int i = 0; i < 3; i++)
    {
        /*creating broke acts as a break in the switch statement by making the other statements no longer execute even though the code is still falling through the switch.*/
        int broke = 0;
        switch (j + 2)
        {
        case 3:
        case 2:
            if (broke == 0)
            {
                j--;
            }
            broke = 1;
        case 0:

            if (broke == 0)
            {
                j += 2;
            }
            broke = 1;
        default:
            j = 0;
        }
        if (j > 0)
        {
            /* setting i to 3 causes the loop to not execute further and since this statement is executed nothing else will be until the loops next check*/
            i = 3;
        }
        else
        {
            j = 3 - i;
        }
    }
}