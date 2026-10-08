#include <stdio.h>

void rec_foo(int n)
{
	if(n < 1)
		return;
	rec_foo(n - 1);
	printf("%d ", n);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	rec_foo(n);
	return 0;
}
