#include <stdio.h>

int rec_sum(int n)
{
	int sum = 0;
	if(n < 1)
		return 0;
	sum = n + rec_sum(n - 1);
	return sum;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", rec_sum(n));
	return 0;
}
