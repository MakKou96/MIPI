#include <stdio.h>

#define SIZE 10

void circle_sdvig(const int* arr, int* sdvig_arr, int len)
{
	sdvig_arr[0] = arr[len - 1];
	
    for (int i = len - 1; i > 0; i--)
    {
		sdvig_arr[i] = arr[i - 1];
    }
}

int main(void)
{
    int arr[SIZE];
    int sdvig_arr[SIZE] = {0};
    int count = 0;
    while(count < SIZE && (scanf("%d", &arr[count]) == 1))
        count++;
    circle_sdvig(arr, sdvig_arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", sdvig_arr[i]);

    
    return 0;
}
