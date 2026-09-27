#include <stdio.h>

int main(void)
{
	int num, even_count = 0, odd_count = 0;
	scanf("%d", &num);
	while(num)
	{
		int temp = num % 10;
		if(temp % 2)
			odd_count++;
		if(!(temp % 2))
			even_count++;
		num = num / 10;
	}	 
	printf("%d %d", even_count, odd_count);
	return 0;
}
