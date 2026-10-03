#include <stdio.h>

unsigned long long calc_grain(int n)
{
	unsigned long long calc = 1;
	for(int i = 1; i < n; i++)
			calc *= 2;
	return calc;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%llu", calc_grain(n));
}
