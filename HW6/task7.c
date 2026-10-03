#include <stdio.h>

int conv_foo(int n, int p)
{
	int pow = 1;
	int cov_num = 0;
	while(n)
	{
		cov_num += (n % p) * pow;
		n = n / p;
		pow *= 10;
	}
	return cov_num;
}
int main(void)
{
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", conv_foo(n, p));
}
