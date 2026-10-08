#include <stdio.h>

void odd_num(int k)
{
	if((scanf("%d", &k)) == 1 && k != 0)
	{
		if((k % 2) != 0)
			printf("%d ", k);
		odd_num(k);
	}
	else
	return;
}

int main(void)
{
	int k = 0;
	odd_num(k);
	return 0;
}
