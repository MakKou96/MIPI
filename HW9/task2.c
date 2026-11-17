void sort_even_odd(int n, int a[])
{
    int count = 0;
    int even[n];
    int odd[n];
    
    for(int i = 0, j = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[count++] = a[i];
        }
        else
        {
            odd[j++] = a[i];
        }
    }
    
    for(int i = 0, j = 0; i < n; i++)
        if(i < count)
            a[i] = even[i];
        else
        {
            a[i] = odd[j++];
        }
            
}
