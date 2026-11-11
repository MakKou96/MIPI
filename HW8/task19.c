#include <stdio.h>
#include <math.h>

#define SIZE 10


void ptint_digit(int N)
{
	int temp = N, count = 0;
	while(temp > 0)
	{
		count++;
		temp /= 10;
	}
	
	for(int i = count - 1; i >= 0; i--)
	{
		int pow = 1;
		for(int j = 0; j < i; j++)
		{
			pow *= 10;
		}
		int digit = (N / pow) % 10;
		printf("%d ", digit);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);
	ptint_digit(N);
	
	return 0;
}
