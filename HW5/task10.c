#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int pred_num = num % 10;
	while(num)
	{
		num = num / 10;
		int next_num = num % 10;
		if(pred_num <= next_num)
		{
			printf("NO");
			return 0;
		}
		pred_num = next_num;
	}	 
	printf("YES");
	return 0;
}
