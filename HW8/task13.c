#include <stdio.h>

#define SIZE 10

int null_foo(int a)
{
	a /= 10;
	if(a % 10 == 0)
		return 1;
		else
		return 0;
}

int sort_foo(const int* arr, int* sort_arr)
{
	int count = 0;
	for(int i = 0; i < SIZE; i++)
		if(null_foo(arr[i]))
			sort_arr[count++] = arr[i];
	return count;
}

int main(void)
{
	int arr[SIZE];
	int sort_arr[10];
	int count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	int len_sort = sort_foo(arr, sort_arr);
	for(int i = 0; i < len_sort; i++)
		printf("%d ", sort_arr[i]);
	return 0;
}
