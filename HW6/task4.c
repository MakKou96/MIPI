#include <stdio.h>

int foo(int, int);
int max(int, int);

int main(void)
{
	int x, max_val = 0;
	while((scanf("%d", &x)) == 1 && x != 0)
		max_val = foo(x, max_val);
	printf("%d", max_val);
	return 0;
}

int foo(int x, int max_val)
{
	int y;
	if(x >= -2 && x < 2)
		y = x * x;
	else if(x >= 2)
		y = x * x + 4 * x + 5;
	else 
		y = 4;
	return max(y, max_val);
}


int max(int y, int max_val)
{
	return (max_val > y) ? max_val : y;
}
