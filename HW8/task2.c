#include <stdio.h>

void min_num(const int* arr, int len, int* min_val)
{
	for(int i = 0; i < len; i++)
		if(*min_val > arr[i])
			*min_val = arr[i];
	
}

int main(void)
{
	int arr[5];
	int count = 0;
	int min_val;
	while(count < 5 && (scanf("%d", &arr[count]) == 1))
		count++;
	min_val = arr[0];
	min_num(arr, count, &min_val);
	printf("%d", min_val);
	return 0;
}
