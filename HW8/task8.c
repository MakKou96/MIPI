#include <stdio.h>

#define SIZE 12

void thrid_invers_foo(const int* arr, int* invers_arr, int len)
{
	int a, b, c, thrid_size;
	thrid_size = len / 3;
	a = thrid_size;
	b = thrid_size * 2;
	c = len;
    for (int i = 0; i < len; i++)
    {
        if (i < thrid_size) 
            invers_arr[--a] = arr[i];
        else if (i >= thrid_size && i < thrid_size * 2) 
            invers_arr[--b] = arr[i];
        else 
            invers_arr[--c] = arr[i];
    }
}

int main(void)
{
    int arr[SIZE];
    int invers_arr[SIZE] = {0};
    int count = 0;
    while(count < SIZE && (scanf("%d", &arr[count]) == 1))
        count++;
    thrid_invers_foo(arr, invers_arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", invers_arr[i]);

    
    return 0;
}
