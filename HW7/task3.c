#include <stdio.h>

void print_dig(int n)
{
	if(n == 0)
		return;
	printf("%d ", n % 10);	
	print_dig(n / 10);
	
}

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n == 0) printf("%d ", n);
	print_dig(n);
	return 0;
}
