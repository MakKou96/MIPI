#include <stdio.h>

void mono_foo(int k, int limit)
{
	int static count = 0;
	if(k == 1)
	{
		count++;
		printf("%d ", k);
		return;
	}
	mono_foo((k - 1), limit);
	for(int i = 0; i < k && count < limit; i++)
	{
		count++;
		printf("%d ", k);
	}
}

int main(void)
{
	int k, limit;
	scanf("%d", &k);
	limit = k;
	mono_foo(k, limit);
	return 0;
}
