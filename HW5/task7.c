#include <stdio.h>
#include <math.h>

int main(void)
{
	int num, first_num;
	scanf("%d", &num);

	while(num)
	{
		first_num = num % 10;
		int num_cycle = num / 10;
		while(num_cycle)
		{
			int second_num = num_cycle % 10;
			if(first_num == second_num)
			{
				printf("YES");
				return 0;
			}
			num_cycle = num_cycle / 10;
		}
		num = num / 10;
	}	 
	printf("NO");
	return 0;
}
