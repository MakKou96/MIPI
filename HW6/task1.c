#include <stdio.h>

int abs(int val)
{
	return (val > 0) ? val : -val;
}
int main(void)
{
	int val;
	scanf("%d", &val);
	printf("%d", abs(val));
	
}
