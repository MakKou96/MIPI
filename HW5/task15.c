#include <stdio.h>

int main(void)
{
    int num, count = 0;

    while (scanf("%d", &num) == 1 && num != 0)
    {
		if(num % 2 == 0)
			count++;
    }

    printf("%d\n", count);
    return 0;
}
