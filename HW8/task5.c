#include <stdio.h>

int sum_plus(const int* arr, int len)
{
	int sum =0;
	for(int i =0; i < 10; i++)
		if(arr[i] > 0)
			sum += arr[i];
	return sum;
}

int main(void)
{
    int arr[10];
    int count = 0;
    while (count < 10 && (scanf("%d", &arr[count]) == 1))
        count++;

    printf("%d\n", sum_plus(arr, count));
    return 0;
}
