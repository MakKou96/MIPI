#include <stdio.h>
#include <math.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int next_num = num % 10;
	while(num)
	{
		int pred_num = next_num;
		num = num / 10;
		next_num = num % 10;
		if(pred_num == next_num)
		{
			printf("YES");
			return 0;
		}
	
	}	 
	printf("NO");
	return 0;
}
