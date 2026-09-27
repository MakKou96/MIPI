#include <stdio.h>

int main(void)
{
	int num, num_rev = 0;
	scanf("%d", &num);
	while(num)
	{
		num_rev = (num % 10) + (num_rev * 10);  
		num = num / 10;
	}	 
	printf("%d", num_rev);
	return 0;
}
