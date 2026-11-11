#include <stdio.h>

void min_num(const int* arr, int len, int* min_val, int* max_val, int* num_min, int* num_max)
{
	for(int i = 0; i < len; i++)
	{
		if(*min_val > arr[i])
		{
			*min_val = arr[i];
			*num_min = (i + 1);
		}
		if(*max_val < arr[i])
		{
			*max_val = arr[i];
			*num_max = (i + 1);
		}
	}		
	
}

int main(void)
{
	int arr[10];
	int count = 0;
	int min_val, max_val, num_min = 0, num_max = 0;
	while(count < 10 && (scanf("%d", &arr[count]) == 1))
		count++;
	min_val = max_val = arr[0];
	num_min = num_max = 1;
	min_num(arr, count, &min_val, &max_val, &num_min, &num_max);
	printf("%d %d %d %d", num_max, max_val, num_min, min_val);
	return 0;
}
