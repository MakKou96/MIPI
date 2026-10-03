#include <stdio.h>

 int is_digit(void)
{
	int count = 0;
	char c;
	while(scanf("%c", &c) && c != '.')
		if(c >= '0' && c <= '9')
			count++;
	return count;
}
int main(void)
{

	printf("%d", is_digit());

	return 0;
}
