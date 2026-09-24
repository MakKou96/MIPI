#include <stdio.h>

int main(void)
{
	int a, b, c, max_num;
	
	scanf("%d %d %d", &a, &b, &c);
	if(a > b)
		{
			if(a >= c)
				max_num = a;
			else
				max_num = c;
		}
	else
	{
		if(b >= c)
			max_num = b;
		else
			max_num = c;
		}
	printf("%d", max_num);
	
	
	return 0;
}
	
