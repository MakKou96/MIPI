#include <stdio.h>

int is2pow(int n)
{
	if(n == 1)
		return 1;
	if((n % 2) == 0)
	{
		return is2pow(n / 2);
	}
	else
		return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int flag = is2pow(n);
	if(flag)
		printf("YES");
	else
		printf("NO");
	return 0;
}
