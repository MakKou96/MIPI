#include <stdio.h>

int acounter(void)
{
	int sum_a = 0;
	int c = getchar();
	if(c == '.')
		return 0;
	if(c == 'a')
		++sum_a;
	return sum_a + acounter();
	
}

int main(void)
{
	printf("%d", acounter());
	return 0;
}
