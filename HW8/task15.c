#include <stdio.h>

#define SIZE 10

int plus_num(const int* arr, int* plus_arr)
{
	int count = 0;
	for(int i = 0; i < SIZE; i++)
		if(arr[i] > 0 && arr[i] !=0)
			plus_arr[count++] = arr[i];
	return count;
}

int minus_num(const int* arr, int* minus_arr)
{
	int count = 0;
	for(int i = 0; i < SIZE; i++)
		if(arr[i] < 0 && arr[i] !=0)
			minus_arr[count++] = arr[i];
	return count;
}

int main(void)
{
	int arr[SIZE];
	int plus_arr[SIZE];
	int minus_arr[SIZE];
	int len_plus, len_minus, count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	len_plus = plus_num(arr, plus_arr);
	for(int i = 0; i < len_plus; i++)
		printf("%d ", plus_arr[i]);
	len_minus = minus_num(arr, minus_arr);
	for(int i = 0; i < len_minus; i++)
		printf("%d ", minus_arr[i]);
	return 0;
}
