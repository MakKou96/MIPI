void sort_array(int size, int a[])
{
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size - i - 1; j++)
        {
            int temp = 0;
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}
