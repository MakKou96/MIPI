#include <stdio.h>

int main(void)
{
	int x, num_1, num_2, num_3;
	scanf("%d", &x);
	num_1 = x / 100;
	num_2 = (x % 100) / 10;
	num_3 = x % 10;
	printf("%d", num_1 + num_2 + num_3);
	
	return 0;
}
	
