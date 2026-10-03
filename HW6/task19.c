#include <stdio.h>

int digit_to_num(void)
{
	int sum = 0;
	char c;
	while(scanf("%c", &c) && c != '.')
		if(c >= '0' && c <= '9')
			sum += c - 48;
	return sum;
}
int main(void)
{

	printf("%d", digit_to_num());

	return 0;
}
