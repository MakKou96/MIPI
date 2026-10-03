#include <stdio.h>

int power(int n, int p)
{
	int pow = 1;
	for(int i = 0; i < p; i++)
		pow *= n;
	return pow;
}
int main(void)
{
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", power(n, p));
	
}
