#include <stdio.h>

int main(void)
{
    int num;
	scanf("%d", &num);
	if (num < 2)
    {
        printf("NO\n");
        return 0;
    }
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");    
    return 0;
}
