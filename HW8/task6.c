#include <stdio.h>

#define SIZE 12

double calc_average(const int* arr, int len)
{
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum += arr[i];
	return ((double)sum / len);
}

int main(void)
{
	int arr[SIZE];
	int count = 0;
	double average;
	while(count < SIZE && (scanf("%d", &arr[count]) == 1))
		count++;
	average = calc_average(arr, count);
	printf("%.2f", average);
	return 0;
}
