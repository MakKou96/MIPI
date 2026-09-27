#include <stdio.h>

int main(void)
{
    int num, f1 = 1, f2 = 1;
	scanf("%d", &num);
	for(int i = 1; i <= num; i++)
	{
		printf("%d ", f1);
		int fib = f1 + f2;
		f1 = f2;
		f2 = fib;
		}
    
    return 0;
}
