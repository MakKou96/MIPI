int compression(int a[], int b[], int N)
{
    int *ptr = a;
    int indx = 0;
    int count_nul = 0, count_one = 0;

    if (*ptr == 1)
        b[indx++] = 0;

    while (ptr < a + N)
    {
        if (*ptr == 0)
        {
            while (ptr < a + N && *ptr == 0)
            {
                count_nul++;
                ptr++;
            }
            b[indx++] = count_nul;
            count_nul = 0;
        }

        if (*ptr == 1)
        {
            while (ptr < a + N &&*ptr == 1)
            {
                count_one++;
                ptr++;
            }
            b[indx++] = count_one;
            count_one = 0;
        }
    }
    return indx;
}
