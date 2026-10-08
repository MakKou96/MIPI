#include <stdio.h>

void print_simple(int k)
{
	if(k <= 1)
	{
		return;
	}
	int static i = 2;
	if ((i * i) > k)
	{
		printf("%d ", k);
		return;
	}
	if (k % i == 0)
	{
		printf("%d ", i);
		k /= i;
		print_simple(k);
	}
	else
	{
		i++;
		print_simple(k);
	}

}

int main(void)
{
	int k;
	scanf("%d", &k);
	print_simple(k);
	return 0;
}
