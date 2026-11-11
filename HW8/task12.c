#include <stdio.h>

#define SIZE 10

void copy_arr(int* arr, int* inver_arr)
{
	for(int i = 0; i < SIZE; i++)
		arr[i] = inver_arr[i];
}

void sort_rise(int* rev_arr, int* inver_arr, int half_l)
{
	int temp_arr[half_l];
	
	for(int i = 0; i < half_l; i++)
		temp_arr[i] = rev_arr[i];
		
	for(int i = 0; i < half_l - 1; i++)
		for(int j = 0; j < half_l - i - 1; j++)
			if(temp_arr[j] > temp_arr[j + 1])
			{
				int temp_val = temp_arr[j];
				temp_arr[j] = temp_arr[j + 1];
				temp_arr[j + 1] = temp_val;
			}
			
	for(int i = 0; i < half_l; i++)
		inver_arr[i] = temp_arr[i];
		
}
void sort_down(int* rev_arr, int* inver_arr, int half_l)
{
	int temp_arr[half_l];
	
	for(int i = 0; i < half_l; i++)
		temp_arr[i] = rev_arr[i];
		
	for(int i = 0; i < half_l - 1; i++)
		for(int j = 0; j < half_l - i - 1; j++)
			if(temp_arr[j] < temp_arr[j + 1])
			{
				int temp_val = temp_arr[j];
				temp_arr[j] = temp_arr[j + 1];
				temp_arr[j + 1] = temp_val;
			}
			
	for(int i = 0; i < half_l; i++)
		inver_arr[half_l + i] = temp_arr[i];
		
}

void invers_foo(int* arr)
{
	int half_size = SIZE / 2;
	int inver_arr[SIZE];
	int half_arr[half_size];
	
	for(int i = 0; i < half_size; i++)
		half_arr[i] = arr[i];
	sort_rise(half_arr, inver_arr, half_size);
	
	for(int i = half_size, j = 0; i < SIZE; i++, j++)
		half_arr[j] = arr[i];	
		
	sort_down(half_arr, inver_arr, half_size);
	copy_arr(arr, inver_arr);
}

int main(void)
{
	int arr[SIZE];
	int count = 0;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	invers_foo(arr);
	for(int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
