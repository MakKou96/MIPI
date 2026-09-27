#include <stdio.h>
#include <math.h>

int main(void)
{
	int num, count = 0;
	scanf("%d", &num);
	while(num)
	{
		num = num / 10;
		count++;
	}	 
	if(count == 3)
		printf("YES");
	else
		printf("NO");
	return 0;
}
