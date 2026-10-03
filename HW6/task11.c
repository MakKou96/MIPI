#include <stdio.h>

void max_min(int a, int b, int* max_val, int* min_val)
{
	*min_val = (a < b) ? a : b;
	*max_val = (a < b) ? b : a;
}

 int nod(int a, int b)
{
	int max_val = 0, min_val = 0;
	max_min(a, b, &max_val, &min_val);
	int ost = max_val % min_val;
	while(ost != 0)
	{
		max_val = min_val;
		min_val = ost;
		ost = max_val % min_val;
	}
	return min_val;
		
}
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", nod(a, b));
	return 0;
}
