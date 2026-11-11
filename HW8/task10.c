#include <stdio.h>

#define SIZE 12
#define SDVIG 4

void circle_sdvig(const int* arr, int* sdvig_arr, int len, int sdvig)
{
	int point_sdvig = len - sdvig;
	int count = 0;
    for (int i = 0; i < sdvig; i++)
    {
		sdvig_arr[i] = arr[point_sdvig++];
    }
        for (int i = sdvig; i < len; i++)
    {
		sdvig_arr[i] = arr[count++];
    }
}

int main(void)
{
    int arr[SIZE];
    int sdvig_arr[SIZE] = {0};
    int count = 0;
    while(count < SIZE && (scanf("%d", &arr[count]) == 1))
        count++;
    circle_sdvig(arr, sdvig_arr, SIZE, SDVIG);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", sdvig_arr[i]);

    
    return 0;
}
