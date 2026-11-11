#include <stdio.h>

#define SIZE 10


int first_num(const int* arr, int num)
{
	for(int i = 0; i < num; i++)
		if(arr[i] == arr[num])
			return 0;
	return 1;
}

int max_count(const int* arr)
{
	int max = 0, indx_max = 0;
	for(int i = 0; i < SIZE; i++)
	{
		int count =0;
		if(!first_num(arr, i))
			continue;
		for(int j = 0; j < SIZE; j++)
			if(arr[i] == arr[j])
				count++;
		if(count > max)
		{
			max = count;
			indx_max = i;
		}
	}
	return indx_max;
}

int main(void)
{
	int arr[SIZE];
	int count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	
	printf("%d", arr[max_count(arr)]);
	return 0;
}
