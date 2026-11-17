void change_max_min(int size, int a[])
{
    int min_indx = 0;
    int max_indx = 0;

    for (int i = 1; i < size; i++) {
        if (a[i] < a[min_indx])
            min_indx = i;
        if (a[i] > a[max_indx])
            max_indx = i;
    }

    int temp = a[min_indx];
    a[min_indx] = a[max_indx];
    a[max_indx] = temp;
}
