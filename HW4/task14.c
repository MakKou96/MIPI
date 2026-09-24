#include <stdio.h>

int main(void)
{
	int x, num_1, num_2, num_3, max_num;
	scanf("%d", &x);
	num_1 = x / 100;
	num_2 = (x % 100) / 10;
	num_3 = x % 10;
	max_num = num_1;
	if(max_num < num_2)
		max_num = num_2;
	if(max_num < num_3)
		max_num = num_3;
	printf("%d", max_num);
	
	return 0;
}
