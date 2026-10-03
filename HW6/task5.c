#include <stdio.h>

int sum_foo(int n)
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum += i;
	return sum;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", sum_foo(n));
}
