#include <stdio.h>

#define SIZE 5


int count_plus_el(int arr[SIZE][SIZE])
{
    int average, sum = 0,count = 0;
    for (int i = 0; i < SIZE; i++)
        sum += arr[i][i];
    average = sum / SIZE;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (arr[i][j] > 0 && arr[i][j] > average)
                count++;
    return count;
}

int main()
{
    int arr[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &arr[i][j]);

    printf("%d", count_plus_el(arr));
    return 0;
}
