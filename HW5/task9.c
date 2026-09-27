#include <stdio.h>


int main(void)
{
	int num, odd_num = 0;
	scanf("%d", &num);

	while(num)
	{
		odd_num = num % 10;
		if(odd_num % 2)
		{
			printf("NO");
			return 0;
		}
		num = num / 10;
	}	 
    printf("YES\n");
	return 0;
}
