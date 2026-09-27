#include <stdio.h>

int main(void)
{
	int num, max_num = 0, min_num = 0;
	scanf("%d", &num);
	max_num = min_num = num % 10;
	while(num)
	{
		int temp = num % 10;
		if(temp > max_num)
			max_num = temp;
		if(temp < min_num)
			min_num = temp;
		num = num / 10;
	}	 
	printf("%d %d", min_num, max_num);
	return 0;
}
