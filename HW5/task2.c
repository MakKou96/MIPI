#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++)
		printf("%d %d %d\n", i, (int)pow(i, 2), (int)pow(i, 3));

	return 0;
}
