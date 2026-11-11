#include <stdio.h>

#define SIZE 10

void invers_foo(const int* arr, int* invers_arr, int len)
{
	int a, b, half_size;
	half_size = SIZE / 2;
	a = half_size;
	b = SIZE;
	for(int i = 0; i < len; i++)
	{
		if(i < half_size)
			invers_arr[--a] = arr[i];
		if(i >= half_size)
			invers_arr[--b] = arr[i];
	}
}

int main(void)
{
	int arr[SIZE];
	int invers_arr[SIZE] = {0};
	int count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	invers_foo(arr, invers_arr, SIZE);
	for(int i = 0; i < SIZE; i++)
		printf("%d ", invers_arr[i]);
	
	return 0;
}
