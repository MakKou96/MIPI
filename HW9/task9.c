void swap_negmax_last(int size, int a[])
{
    int minus_indx = -1;

    for (int i = 0; i < size; i++) {
        if (a[i] >= 0)
            continue;
        if (minus_indx == -1 || a[i] > a[minus_indx])
            minus_indx = i;
    }

    if (minus_indx != -1) {
        int temp = a[minus_indx];
        a[minus_indx] = a[size - 1];
        a[size - 1] = temp;
    }
}
