#include <stdio.h>

int main(void)
{
    int num, sum = 0;
	scanf("%d", &num);
    while(num)
    {
		sum += num % 10;
		num = num / 10;
	}
	(sum == 10) ? printf("YES") : printf("NO");
    
    return 0;
}
