#include <stdio.h>

int count_one(int n)
{
	if(n == 0)
		return 0;
	return (n & 1) + count_one(n >> 1);
}

int main(void)
{
	int n, count = 0;
	scanf("%d", &n);
	count = count_one(n);
	printf("%d", count);
	return 0;
}
