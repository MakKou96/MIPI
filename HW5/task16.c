#include <stdio.h>

int main(void)
{
    int a, b, ost;
	scanf("%d %d", &a, &b);
	if(a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	ost = a % b;
	while(ost != 0)
	{
		a = b;
		b = ost;
		ost = a % b;
	}
		
    printf("%d\n", b);
    return 0;
}
