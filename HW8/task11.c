#include <stdio.h>

#define SIZE 10

int last_num(int num)
{
	return num % 10;
}
int min_num(int* temp_arr, int i, int len)
{
	int min = i;
	for(int j = i + 1; j < len; ++j)
	{
		if(temp_arr[j] < temp_arr[min])
			min = j;
	}
	return min;
}

void sort_foo(int* sort_arr, int len)
{
	int temp_arr[SIZE] = {0};
	for(int i = 0; i < len; ++i)
		temp_arr[i] = last_num(sort_arr[i]);
    for(int i = 0; i < len; ++i)
    {
		int min = min_num(temp_arr, i, len);
		
		int temp = temp_arr[i];
		temp_arr[i] = temp_arr[min];
		temp_arr[min] = temp;
		
		int temp_s = sort_arr[i];
		sort_arr[i] = sort_arr[min];
		sort_arr[min] = temp_s;	
	}	 
}

int main(void)
{
    int arr[SIZE];
    int sort_arr[SIZE] = {0};
    int count = 0;
    while(count < SIZE && (scanf("%d", &arr[count]) == 1))
        count++;
    for(int i = 0; i < SIZE; ++i)
		sort_arr[i] = arr[i];
    sort_foo(sort_arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", sort_arr[i]);

    
    return 0;
}
