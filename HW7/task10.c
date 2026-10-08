#include <stdio.h>

int is_prime(int n, int delitel)
{
	if(n == 1)
		return 0;
	if(delitel == 1)
		return 1;
	if((n % delitel == 0))
		return 0;
	return is_prime(n, (delitel - 1));
}

int main(void)
{
	int n, delitel;
	scanf("%d", &n);
	delitel = n / 2;
	if(is_prime(n, delitel))
		printf("YES");
	else
		printf("NO");
	
	return 0;
}
