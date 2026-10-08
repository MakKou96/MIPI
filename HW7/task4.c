#include <stdio.h>

void print_num(int n)
{
	if(n == 0)
		return;	
	print_num(n / 10);
	printf("%d ", n % 10);
	
}

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n == 0) printf("%d ", n);
	print_num(n);
	return 0;
}
