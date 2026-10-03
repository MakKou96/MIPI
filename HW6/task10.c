#include <stdio.h>

void print_simple(int n)
{
	for(int i = 2; i * i <= n; i++)
	{
		while((n % i) == 0)
		{
			printf("%d ", i);
			n /= i;
		 }
	 }

	if(n > 1)
		printf("%d", n);
		
}
int main(void)
{
	int n;
	scanf("%d", &n);
	print_simple(n);
	return 0;
}
