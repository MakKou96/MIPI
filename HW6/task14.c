#include <stdio.h>
#include <math.h>

void even(int x)
{
	int sum = 0;
	while(x)
	{
		sum += x % 10;
		x = x / 10;
	}
    if(sum % 2 == 0)
		printf("YES");
	else
	printf("NO");
}
int main(void)
{
	float x;
	scanf("%f", &x);
	even(x);
	return 0;
}
