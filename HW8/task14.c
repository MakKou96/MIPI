#include <stdio.h>

#define SIZE 10

int povtor_foo( const int* arr, int start)
{
	int count = 0;
	int num = arr[start];
	for(int i = start; i < SIZE; i++)
		if(arr[i] == num)
			count++;
	return count;
}

int dubl_num(const int* arr, int num)
{
	for(int i = 0; i < num; i++)
		if(arr[i] == arr[num])
			return 0;
	return 1;
}

int sort_foo(const int* arr, int* sort_arr)
{
	int len_sort = 0;
	for(int i = 0; i < SIZE; i++)
		if(dubl_num(arr, i) && povtor_foo(arr, i) > 1)
			sort_arr[len_sort++] = arr[i];
	return len_sort;
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
