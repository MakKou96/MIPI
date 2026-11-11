#include <stdio.h>

int sum_max(const int* arr, int len)
{
    if (len < 2) return 0;

    int first_max, second_max;
    (arr[0] >= arr[1]) ? (first_max = arr[0], second_max = arr[1]) : (first_max = arr[1], second_max = arr[0]);

    for (int i = 2; i < len; i++) 
    {
        if (arr[i] > first_max) 
        {
            second_max = first_max;
            first_max = arr[i];
         } 
        else if (arr[i] > second_max)
        {
            second_max = arr[i];
        }
    }

    return first_max + second_max;
}

int main(void)
{
    int arr[10];
    int count = 0;
    while (count < 10 && (scanf("%d", &arr[count]) == 1))
        count++;

    printf("%d\n", sum_max(arr, count));
    return 0;
}
