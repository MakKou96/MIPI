#include <stdio.h>

int max_find(int max)
{
	int temp = 0;
	if((scanf("%d", &temp)) == 1 && temp != 0)
	{
		if(temp > max)
			max = temp;
		return max_find(max);
	}
	else
		return max;
}

int main(void)
{
	int max;
	scanf("%d", &max);
	max = max_find(max);
	printf("%d", max);
	return 0;
}
