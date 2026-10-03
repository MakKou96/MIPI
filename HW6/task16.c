#include <stdio.h>

void is_prime(int n)
{
	if(n <= 1)
	{
		printf("NO");
		return;
	}
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}
int main(void)
{
	int n;
	scanf("%d", &n);
	is_prime(n);

	return 0;
}
