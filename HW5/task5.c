#include <stdio.h>
#include <math.h>

int main(void)
{
	int num, sum = 0;
	scanf("%d", &num);
	while(num)
	{
		sum += num % 10;
		num = num / 10;
		
	}	 
	printf("%d", sum);
	return 0;
}
