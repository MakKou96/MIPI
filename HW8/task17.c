#include <stdio.h>

#define SIZE 10


int max_count(const int* arr, int* sort_arr)
{
	int count = 0;
	for(int i = 0; i < SIZE; i++)
	{
		int flag = 0;
		for(int j = 0; j < SIZE; j++)
			if(i != j && arr[i] == arr[j])
			{
				flag = 1;
				break;
			}
		if(!flag)
			sort_arr[count++] = arr[i];
		
	}
	return count;
}

int main(void)
{
	int arr[SIZE];
	int sort_arr[SIZE];
	int count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	int len_sort = max_count(arr, sort_arr);
	for(int i = 0; i < len_sort; i++)
		printf("%d ", sort_arr[i]);
	return 0;
}
