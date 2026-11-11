#include <stdio.h>

double calc_average(const int* arr, int len)
{
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum += arr[i];
	return ((double)sum / len);
}

int main(void)
{
	int arr[5];
	int count = 0;
	double average;
	while(count < 5 && (scanf("%d", &arr[count]) == 1))
		count++;
	average = calc_average(arr, count);
	printf("%.3f", average);
	return 0;
}
