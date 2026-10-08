#include <stdio.h>

int recurs_power(int n, int p)
{
	int static pow = 1;
	if(p == 0)
		return pow;
	pow *= n;
	return recurs_power(n, --p);
}

int main(void)
{
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", recurs_power(n, p));
	return 0;
}
