
void fun(void)
{
    int j = -3;
    for (int i = 0; i < 3; i++)
    {

        if ((j + 2) == 3)
        {
            /*included this to simulate how C switches will flow through the switch statement if there is no break;*/
            goto switch2;
        }
        else if ((j + 2) == 2)
        {
        switch2:
            j--;
            goto endSwitch;
        }
        else if ((j + 2) == 0)
        {
            j += 2;
            goto endSwitch;
        }
        else
        {
            j = 0;
        }

    endSwitch:

        if (j > 0)
        {
            goto end;
        }
        j = 3 - i;
    }
end:
}